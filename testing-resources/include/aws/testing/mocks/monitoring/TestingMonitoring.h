/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/monitoring/CoreMetrics.h>
#include <aws/core/monitoring/MonitoringInterface.h>
#include <aws/core/monitoring/MonitoringFactory.h>
#include <aws/core/monitoring/MonitoringManager.h>

static const char TESTING_MONITORING_CLASS_TAG[] = "TestingMonitoring";

struct TestingMonitoringMetrics
{
    struct Config
    {
        static bool s_enablePayload;
    };

    static Aws::String s_lastUriString;
    static Aws::String s_lastSigningRegion;
    static Aws::String s_lastSigningServiceName;
    static Aws::String s_lastPayload;
    static Aws::Map<Aws::String, Aws::String> s_lastRequestHeaders;
};

bool TestingMonitoringMetrics::Config::s_enablePayload;

Aws::String TestingMonitoringMetrics::s_lastUriString;
Aws::String TestingMonitoringMetrics::s_lastSigningRegion;
Aws::String TestingMonitoringMetrics::s_lastSigningServiceName;
Aws::String TestingMonitoringMetrics::s_lastPayload;
Aws::Map<Aws::String, Aws::String> TestingMonitoringMetrics::s_lastRequestHeaders;

class TestingMonitoring : public Aws::Monitoring::MonitoringInterface
{
public:
    void* OnRequestStarted(const Aws::String& serviceName, const Aws::String& requestName, const std::shared_ptr<const Aws::Http::HttpRequest>& request) const override
    {
        AWS_UNREFERENCED_PARAM(serviceName);
        AWS_UNREFERENCED_PARAM(requestName);
        AWS_UNREFERENCED_PARAM(request);
        return reinterpret_cast<void*>(1);
    }

    void OnRequestSucceeded(const Aws::String& serviceName, const Aws::String& requestName, const std::shared_ptr<const Aws::Http::HttpRequest>& request,
        const Aws::Client::HttpResponseOutcome& outcome, const Aws::Monitoring::CoreMetricsCollection& metricsFromCore, void* context) const override
    {
        AWS_UNREFERENCED_PARAM(serviceName);
        AWS_UNREFERENCED_PARAM(requestName);
        AWS_UNREFERENCED_PARAM(request);
        AWS_UNREFERENCED_PARAM(outcome);
        AWS_UNREFERENCED_PARAM(metricsFromCore);
        AWS_UNREFERENCED_PARAM(context);
    }

    void OnRequestFailed(const Aws::String& serviceName, const Aws::String& requestName, const std::shared_ptr<const Aws::Http::HttpRequest>& request,
        const Aws::Client::HttpResponseOutcome& outcome, const Aws::Monitoring::CoreMetricsCollection& metricsFromCore, void* context) const override
    {
        AWS_UNREFERENCED_PARAM(serviceName);
        AWS_UNREFERENCED_PARAM(requestName);
        AWS_UNREFERENCED_PARAM(request);
        AWS_UNREFERENCED_PARAM(outcome);
        AWS_UNREFERENCED_PARAM(metricsFromCore);
        AWS_UNREFERENCED_PARAM(context);
    }

    void OnRequestRetry(const Aws::String& serviceName, const Aws::String& requestName,
        const std::shared_ptr<const Aws::Http::HttpRequest>& request, void* context) const override
    {
        AWS_UNREFERENCED_PARAM(serviceName);
        AWS_UNREFERENCED_PARAM(requestName);
        AWS_UNREFERENCED_PARAM(request);
        AWS_UNREFERENCED_PARAM(context);
    }

    void OnFinish(const Aws::String& serviceName, const Aws::String& requestName,
        const std::shared_ptr<const Aws::Http::HttpRequest>& request, void* context) const override
    {
        AWS_UNREFERENCED_PARAM(serviceName);
        AWS_UNREFERENCED_PARAM(requestName);
        AWS_UNREFERENCED_PARAM(context);
        TestingMonitoringMetrics::s_lastUriString = request->GetUri().GetURIString().c_str();
        TestingMonitoringMetrics::s_lastSigningRegion = request->GetSigningRegion().c_str();
        Aws::Vector<Aws::String> authComponents = request->HasAwsAuthorization() ?
                Aws::Utils::StringUtils::Split(request->GetAwsAuthorization(), '/') : Aws::Vector<Aws::String>();
        if (authComponents.size() > 3)
        {
            if (authComponents[0].find("AWS4-HMAC-SHA256") == 0)
            {
                // For SigV4
                TestingMonitoringMetrics::s_lastSigningServiceName = authComponents[3].c_str();
            }
            else if (authComponents[0].find("AWS4-ECDSA-P256-SHA256") == 0)
            {
                // For SigV4A
                TestingMonitoringMetrics::s_lastSigningServiceName = authComponents[2].c_str();
            }
            else
            {
                TestingMonitoringMetrics::s_lastSigningServiceName = "";
            }
        }
        else
        {
            TestingMonitoringMetrics::s_lastSigningServiceName = "";
        }
        TestingMonitoringMetrics::s_lastRequestHeaders.clear();
        for (const auto& header : request->GetHeaders())
        {
            TestingMonitoringMetrics::s_lastRequestHeaders[header.first.c_str()] = header.second.c_str();
        }
        if (TestingMonitoringMetrics::Config::s_enablePayload)
        {
            request->GetContentBody()->clear();
            request->GetContentBody()->seekg(0);
            Aws::StringStream ss;
            ss << request->GetContentBody()->rdbuf() << std::endl;
            TestingMonitoringMetrics::s_lastPayload = ss.str().c_str();
        }
    }
};

class TestingMonitoringFactory : public Aws::Monitoring::MonitoringFactory
{
public:
    Aws::UniquePtr<Aws::Monitoring::MonitoringInterface> CreateMonitoringInstance() const override
    {
        return Aws::MakeUnique<TestingMonitoring>(TESTING_MONITORING_CLASS_TAG);
    }
};

class TestingMonitoringManager
{
public:
    static void InitTestingMonitoring()
    {
        Aws::Monitoring::CleanupMonitoring();
        std::vector<Aws::Monitoring::MonitoringFactoryCreateFunction> factoryFunctions;
        factoryFunctions.emplace_back([](){ return Aws::MakeUnique<TestingMonitoringFactory>(TESTING_MONITORING_CLASS_TAG); });
        Aws::Monitoring::InitMonitoring(factoryFunctions);
        Init();
    }

    static void CleanupTestingMonitoring()
    {
        Init();
        Aws::Monitoring::CleanupMonitoring();
        Aws::Monitoring::InitMonitoring(std::vector<Aws::Monitoring::MonitoringFactoryCreateFunction>());
    }

private:
    static void Init()
    {
        TestingMonitoringMetrics::Config::s_enablePayload = false;

        TestingMonitoringMetrics::s_lastUriString = "";
        TestingMonitoringMetrics::s_lastSigningRegion = "";
        TestingMonitoringMetrics::s_lastSigningServiceName = "";
        TestingMonitoringMetrics::s_lastPayload = "";
        TestingMonitoringMetrics::s_lastRequestHeaders.clear();
    }
};
