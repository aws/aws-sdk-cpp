﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearchserverless/OpenSearchServerless_EXPORTS.h>
#include <aws/opensearchserverless/model/CapacityLimits.h>
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
namespace OpenSearchServerless
{
namespace Model
{

  /**
   * <p>OpenSearch Serverless-related information for the current
   * account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchserverless-2021-11-01/AccountSettingsDetail">AWS
   * API Reference</a></p>
   */
  class AccountSettingsDetail
  {
  public:
    AWS_OPENSEARCHSERVERLESS_API AccountSettingsDetail() = default;
    AWS_OPENSEARCHSERVERLESS_API AccountSettingsDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVERLESS_API AccountSettingsDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVERLESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const CapacityLimits& GetCapacityLimits() const { return m_capacityLimits; }
    inline bool CapacityLimitsHasBeenSet() const { return m_capacityLimitsHasBeenSet; }
    template<typename CapacityLimitsT = CapacityLimits>
    void SetCapacityLimits(CapacityLimitsT&& value) { m_capacityLimitsHasBeenSet = true; m_capacityLimits = std::forward<CapacityLimitsT>(value); }
    template<typename CapacityLimitsT = CapacityLimits>
    AccountSettingsDetail& WithCapacityLimits(CapacityLimitsT&& value) { SetCapacityLimits(std::forward<CapacityLimitsT>(value)); return *this;}
    ///@}
  private:

    CapacityLimits m_capacityLimits;
    bool m_capacityLimitsHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchServerless
} // namespace Aws
