﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/xray/XRay_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace XRay
{
namespace Model
{

  /**
   * <p>A document specifying changes to a sampling rule's
   * configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/SamplingRuleUpdate">AWS
   * API Reference</a></p>
   */
  class SamplingRuleUpdate
  {
  public:
    AWS_XRAY_API SamplingRuleUpdate();
    AWS_XRAY_API SamplingRuleUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_XRAY_API SamplingRuleUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_XRAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the sampling rule. Specify a rule by either name or ARN, but not
     * both.</p>
     */
    inline const Aws::String& GetRuleName() const{ return m_ruleName; }
    inline bool RuleNameHasBeenSet() const { return m_ruleNameHasBeenSet; }
    inline void SetRuleName(const Aws::String& value) { m_ruleNameHasBeenSet = true; m_ruleName = value; }
    inline void SetRuleName(Aws::String&& value) { m_ruleNameHasBeenSet = true; m_ruleName = std::move(value); }
    inline void SetRuleName(const char* value) { m_ruleNameHasBeenSet = true; m_ruleName.assign(value); }
    inline SamplingRuleUpdate& WithRuleName(const Aws::String& value) { SetRuleName(value); return *this;}
    inline SamplingRuleUpdate& WithRuleName(Aws::String&& value) { SetRuleName(std::move(value)); return *this;}
    inline SamplingRuleUpdate& WithRuleName(const char* value) { SetRuleName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the sampling rule. Specify a rule by either name or ARN, but not
     * both.</p>
     */
    inline const Aws::String& GetRuleARN() const{ return m_ruleARN; }
    inline bool RuleARNHasBeenSet() const { return m_ruleARNHasBeenSet; }
    inline void SetRuleARN(const Aws::String& value) { m_ruleARNHasBeenSet = true; m_ruleARN = value; }
    inline void SetRuleARN(Aws::String&& value) { m_ruleARNHasBeenSet = true; m_ruleARN = std::move(value); }
    inline void SetRuleARN(const char* value) { m_ruleARNHasBeenSet = true; m_ruleARN.assign(value); }
    inline SamplingRuleUpdate& WithRuleARN(const Aws::String& value) { SetRuleARN(value); return *this;}
    inline SamplingRuleUpdate& WithRuleARN(Aws::String&& value) { SetRuleARN(std::move(value)); return *this;}
    inline SamplingRuleUpdate& WithRuleARN(const char* value) { SetRuleARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Matches the ARN of the Amazon Web Services resource on which the service
     * runs.</p>
     */
    inline const Aws::String& GetResourceARN() const{ return m_resourceARN; }
    inline bool ResourceARNHasBeenSet() const { return m_resourceARNHasBeenSet; }
    inline void SetResourceARN(const Aws::String& value) { m_resourceARNHasBeenSet = true; m_resourceARN = value; }
    inline void SetResourceARN(Aws::String&& value) { m_resourceARNHasBeenSet = true; m_resourceARN = std::move(value); }
    inline void SetResourceARN(const char* value) { m_resourceARNHasBeenSet = true; m_resourceARN.assign(value); }
    inline SamplingRuleUpdate& WithResourceARN(const Aws::String& value) { SetResourceARN(value); return *this;}
    inline SamplingRuleUpdate& WithResourceARN(Aws::String&& value) { SetResourceARN(std::move(value)); return *this;}
    inline SamplingRuleUpdate& WithResourceARN(const char* value) { SetResourceARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The priority of the sampling rule.</p>
     */
    inline int GetPriority() const{ return m_priority; }
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }
    inline void SetPriority(int value) { m_priorityHasBeenSet = true; m_priority = value; }
    inline SamplingRuleUpdate& WithPriority(int value) { SetPriority(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The percentage of matching requests to instrument, after the reservoir is
     * exhausted.</p>
     */
    inline double GetFixedRate() const{ return m_fixedRate; }
    inline bool FixedRateHasBeenSet() const { return m_fixedRateHasBeenSet; }
    inline void SetFixedRate(double value) { m_fixedRateHasBeenSet = true; m_fixedRate = value; }
    inline SamplingRuleUpdate& WithFixedRate(double value) { SetFixedRate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A fixed number of matching requests to instrument per second, prior to
     * applying the fixed rate. The reservoir is not used directly by services, but
     * applies to all services using the rule collectively.</p>
     */
    inline int GetReservoirSize() const{ return m_reservoirSize; }
    inline bool ReservoirSizeHasBeenSet() const { return m_reservoirSizeHasBeenSet; }
    inline void SetReservoirSize(int value) { m_reservoirSizeHasBeenSet = true; m_reservoirSize = value; }
    inline SamplingRuleUpdate& WithReservoirSize(int value) { SetReservoirSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Matches the hostname from a request URL.</p>
     */
    inline const Aws::String& GetHost() const{ return m_host; }
    inline bool HostHasBeenSet() const { return m_hostHasBeenSet; }
    inline void SetHost(const Aws::String& value) { m_hostHasBeenSet = true; m_host = value; }
    inline void SetHost(Aws::String&& value) { m_hostHasBeenSet = true; m_host = std::move(value); }
    inline void SetHost(const char* value) { m_hostHasBeenSet = true; m_host.assign(value); }
    inline SamplingRuleUpdate& WithHost(const Aws::String& value) { SetHost(value); return *this;}
    inline SamplingRuleUpdate& WithHost(Aws::String&& value) { SetHost(std::move(value)); return *this;}
    inline SamplingRuleUpdate& WithHost(const char* value) { SetHost(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Matches the <code>name</code> that the service uses to identify itself in
     * segments.</p>
     */
    inline const Aws::String& GetServiceName() const{ return m_serviceName; }
    inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }
    inline void SetServiceName(const Aws::String& value) { m_serviceNameHasBeenSet = true; m_serviceName = value; }
    inline void SetServiceName(Aws::String&& value) { m_serviceNameHasBeenSet = true; m_serviceName = std::move(value); }
    inline void SetServiceName(const char* value) { m_serviceNameHasBeenSet = true; m_serviceName.assign(value); }
    inline SamplingRuleUpdate& WithServiceName(const Aws::String& value) { SetServiceName(value); return *this;}
    inline SamplingRuleUpdate& WithServiceName(Aws::String&& value) { SetServiceName(std::move(value)); return *this;}
    inline SamplingRuleUpdate& WithServiceName(const char* value) { SetServiceName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Matches the <code>origin</code> that the service uses to identify its type in
     * segments.</p>
     */
    inline const Aws::String& GetServiceType() const{ return m_serviceType; }
    inline bool ServiceTypeHasBeenSet() const { return m_serviceTypeHasBeenSet; }
    inline void SetServiceType(const Aws::String& value) { m_serviceTypeHasBeenSet = true; m_serviceType = value; }
    inline void SetServiceType(Aws::String&& value) { m_serviceTypeHasBeenSet = true; m_serviceType = std::move(value); }
    inline void SetServiceType(const char* value) { m_serviceTypeHasBeenSet = true; m_serviceType.assign(value); }
    inline SamplingRuleUpdate& WithServiceType(const Aws::String& value) { SetServiceType(value); return *this;}
    inline SamplingRuleUpdate& WithServiceType(Aws::String&& value) { SetServiceType(std::move(value)); return *this;}
    inline SamplingRuleUpdate& WithServiceType(const char* value) { SetServiceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Matches the HTTP method of a request.</p>
     */
    inline const Aws::String& GetHTTPMethod() const{ return m_hTTPMethod; }
    inline bool HTTPMethodHasBeenSet() const { return m_hTTPMethodHasBeenSet; }
    inline void SetHTTPMethod(const Aws::String& value) { m_hTTPMethodHasBeenSet = true; m_hTTPMethod = value; }
    inline void SetHTTPMethod(Aws::String&& value) { m_hTTPMethodHasBeenSet = true; m_hTTPMethod = std::move(value); }
    inline void SetHTTPMethod(const char* value) { m_hTTPMethodHasBeenSet = true; m_hTTPMethod.assign(value); }
    inline SamplingRuleUpdate& WithHTTPMethod(const Aws::String& value) { SetHTTPMethod(value); return *this;}
    inline SamplingRuleUpdate& WithHTTPMethod(Aws::String&& value) { SetHTTPMethod(std::move(value)); return *this;}
    inline SamplingRuleUpdate& WithHTTPMethod(const char* value) { SetHTTPMethod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Matches the path from a request URL.</p>
     */
    inline const Aws::String& GetURLPath() const{ return m_uRLPath; }
    inline bool URLPathHasBeenSet() const { return m_uRLPathHasBeenSet; }
    inline void SetURLPath(const Aws::String& value) { m_uRLPathHasBeenSet = true; m_uRLPath = value; }
    inline void SetURLPath(Aws::String&& value) { m_uRLPathHasBeenSet = true; m_uRLPath = std::move(value); }
    inline void SetURLPath(const char* value) { m_uRLPathHasBeenSet = true; m_uRLPath.assign(value); }
    inline SamplingRuleUpdate& WithURLPath(const Aws::String& value) { SetURLPath(value); return *this;}
    inline SamplingRuleUpdate& WithURLPath(Aws::String&& value) { SetURLPath(std::move(value)); return *this;}
    inline SamplingRuleUpdate& WithURLPath(const char* value) { SetURLPath(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Matches attributes derived from the request.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const{ return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    inline void SetAttributes(const Aws::Map<Aws::String, Aws::String>& value) { m_attributesHasBeenSet = true; m_attributes = value; }
    inline void SetAttributes(Aws::Map<Aws::String, Aws::String>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }
    inline SamplingRuleUpdate& WithAttributes(const Aws::Map<Aws::String, Aws::String>& value) { SetAttributes(value); return *this;}
    inline SamplingRuleUpdate& WithAttributes(Aws::Map<Aws::String, Aws::String>&& value) { SetAttributes(std::move(value)); return *this;}
    inline SamplingRuleUpdate& AddAttributes(const Aws::String& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }
    inline SamplingRuleUpdate& AddAttributes(Aws::String&& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }
    inline SamplingRuleUpdate& AddAttributes(const Aws::String& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }
    inline SamplingRuleUpdate& AddAttributes(Aws::String&& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), std::move(value)); return *this; }
    inline SamplingRuleUpdate& AddAttributes(const char* key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }
    inline SamplingRuleUpdate& AddAttributes(Aws::String&& key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }
    inline SamplingRuleUpdate& AddAttributes(const char* key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_ruleName;
    bool m_ruleNameHasBeenSet = false;

    Aws::String m_ruleARN;
    bool m_ruleARNHasBeenSet = false;

    Aws::String m_resourceARN;
    bool m_resourceARNHasBeenSet = false;

    int m_priority;
    bool m_priorityHasBeenSet = false;

    double m_fixedRate;
    bool m_fixedRateHasBeenSet = false;

    int m_reservoirSize;
    bool m_reservoirSizeHasBeenSet = false;

    Aws::String m_host;
    bool m_hostHasBeenSet = false;

    Aws::String m_serviceName;
    bool m_serviceNameHasBeenSet = false;

    Aws::String m_serviceType;
    bool m_serviceTypeHasBeenSet = false;

    Aws::String m_hTTPMethod;
    bool m_hTTPMethodHasBeenSet = false;

    Aws::String m_uRLPath;
    bool m_uRLPathHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_attributes;
    bool m_attributesHasBeenSet = false;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
