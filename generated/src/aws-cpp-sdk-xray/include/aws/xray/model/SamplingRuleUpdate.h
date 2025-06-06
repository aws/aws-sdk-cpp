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
    AWS_XRAY_API SamplingRuleUpdate() = default;
    AWS_XRAY_API SamplingRuleUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_XRAY_API SamplingRuleUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_XRAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the sampling rule. Specify a rule by either name or ARN, but not
     * both.</p>
     */
    inline const Aws::String& GetRuleName() const { return m_ruleName; }
    inline bool RuleNameHasBeenSet() const { return m_ruleNameHasBeenSet; }
    template<typename RuleNameT = Aws::String>
    void SetRuleName(RuleNameT&& value) { m_ruleNameHasBeenSet = true; m_ruleName = std::forward<RuleNameT>(value); }
    template<typename RuleNameT = Aws::String>
    SamplingRuleUpdate& WithRuleName(RuleNameT&& value) { SetRuleName(std::forward<RuleNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the sampling rule. Specify a rule by either name or ARN, but not
     * both.</p>
     */
    inline const Aws::String& GetRuleARN() const { return m_ruleARN; }
    inline bool RuleARNHasBeenSet() const { return m_ruleARNHasBeenSet; }
    template<typename RuleARNT = Aws::String>
    void SetRuleARN(RuleARNT&& value) { m_ruleARNHasBeenSet = true; m_ruleARN = std::forward<RuleARNT>(value); }
    template<typename RuleARNT = Aws::String>
    SamplingRuleUpdate& WithRuleARN(RuleARNT&& value) { SetRuleARN(std::forward<RuleARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Matches the ARN of the Amazon Web Services resource on which the service
     * runs.</p>
     */
    inline const Aws::String& GetResourceARN() const { return m_resourceARN; }
    inline bool ResourceARNHasBeenSet() const { return m_resourceARNHasBeenSet; }
    template<typename ResourceARNT = Aws::String>
    void SetResourceARN(ResourceARNT&& value) { m_resourceARNHasBeenSet = true; m_resourceARN = std::forward<ResourceARNT>(value); }
    template<typename ResourceARNT = Aws::String>
    SamplingRuleUpdate& WithResourceARN(ResourceARNT&& value) { SetResourceARN(std::forward<ResourceARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The priority of the sampling rule.</p>
     */
    inline int GetPriority() const { return m_priority; }
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }
    inline void SetPriority(int value) { m_priorityHasBeenSet = true; m_priority = value; }
    inline SamplingRuleUpdate& WithPriority(int value) { SetPriority(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The percentage of matching requests to instrument, after the reservoir is
     * exhausted.</p>
     */
    inline double GetFixedRate() const { return m_fixedRate; }
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
    inline int GetReservoirSize() const { return m_reservoirSize; }
    inline bool ReservoirSizeHasBeenSet() const { return m_reservoirSizeHasBeenSet; }
    inline void SetReservoirSize(int value) { m_reservoirSizeHasBeenSet = true; m_reservoirSize = value; }
    inline SamplingRuleUpdate& WithReservoirSize(int value) { SetReservoirSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Matches the hostname from a request URL.</p>
     */
    inline const Aws::String& GetHost() const { return m_host; }
    inline bool HostHasBeenSet() const { return m_hostHasBeenSet; }
    template<typename HostT = Aws::String>
    void SetHost(HostT&& value) { m_hostHasBeenSet = true; m_host = std::forward<HostT>(value); }
    template<typename HostT = Aws::String>
    SamplingRuleUpdate& WithHost(HostT&& value) { SetHost(std::forward<HostT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Matches the <code>name</code> that the service uses to identify itself in
     * segments.</p>
     */
    inline const Aws::String& GetServiceName() const { return m_serviceName; }
    inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }
    template<typename ServiceNameT = Aws::String>
    void SetServiceName(ServiceNameT&& value) { m_serviceNameHasBeenSet = true; m_serviceName = std::forward<ServiceNameT>(value); }
    template<typename ServiceNameT = Aws::String>
    SamplingRuleUpdate& WithServiceName(ServiceNameT&& value) { SetServiceName(std::forward<ServiceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Matches the <code>origin</code> that the service uses to identify its type in
     * segments.</p>
     */
    inline const Aws::String& GetServiceType() const { return m_serviceType; }
    inline bool ServiceTypeHasBeenSet() const { return m_serviceTypeHasBeenSet; }
    template<typename ServiceTypeT = Aws::String>
    void SetServiceType(ServiceTypeT&& value) { m_serviceTypeHasBeenSet = true; m_serviceType = std::forward<ServiceTypeT>(value); }
    template<typename ServiceTypeT = Aws::String>
    SamplingRuleUpdate& WithServiceType(ServiceTypeT&& value) { SetServiceType(std::forward<ServiceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Matches the HTTP method of a request.</p>
     */
    inline const Aws::String& GetHTTPMethod() const { return m_hTTPMethod; }
    inline bool HTTPMethodHasBeenSet() const { return m_hTTPMethodHasBeenSet; }
    template<typename HTTPMethodT = Aws::String>
    void SetHTTPMethod(HTTPMethodT&& value) { m_hTTPMethodHasBeenSet = true; m_hTTPMethod = std::forward<HTTPMethodT>(value); }
    template<typename HTTPMethodT = Aws::String>
    SamplingRuleUpdate& WithHTTPMethod(HTTPMethodT&& value) { SetHTTPMethod(std::forward<HTTPMethodT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Matches the path from a request URL.</p>
     */
    inline const Aws::String& GetURLPath() const { return m_uRLPath; }
    inline bool URLPathHasBeenSet() const { return m_uRLPathHasBeenSet; }
    template<typename URLPathT = Aws::String>
    void SetURLPath(URLPathT&& value) { m_uRLPathHasBeenSet = true; m_uRLPath = std::forward<URLPathT>(value); }
    template<typename URLPathT = Aws::String>
    SamplingRuleUpdate& WithURLPath(URLPathT&& value) { SetURLPath(std::forward<URLPathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Matches attributes derived from the request.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const { return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    template<typename AttributesT = Aws::Map<Aws::String, Aws::String>>
    void SetAttributes(AttributesT&& value) { m_attributesHasBeenSet = true; m_attributes = std::forward<AttributesT>(value); }
    template<typename AttributesT = Aws::Map<Aws::String, Aws::String>>
    SamplingRuleUpdate& WithAttributes(AttributesT&& value) { SetAttributes(std::forward<AttributesT>(value)); return *this;}
    template<typename AttributesKeyT = Aws::String, typename AttributesValueT = Aws::String>
    SamplingRuleUpdate& AddAttributes(AttributesKeyT&& key, AttributesValueT&& value) {
      m_attributesHasBeenSet = true; m_attributes.emplace(std::forward<AttributesKeyT>(key), std::forward<AttributesValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_ruleName;
    bool m_ruleNameHasBeenSet = false;

    Aws::String m_ruleARN;
    bool m_ruleARNHasBeenSet = false;

    Aws::String m_resourceARN;
    bool m_resourceARNHasBeenSet = false;

    int m_priority{0};
    bool m_priorityHasBeenSet = false;

    double m_fixedRate{0.0};
    bool m_fixedRateHasBeenSet = false;

    int m_reservoirSize{0};
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
