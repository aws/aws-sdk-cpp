﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/xray/XRay_EXPORTS.h>
#include <aws/xray/XRayRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/xray/model/SamplingStatisticsDocument.h>
#include <utility>

namespace Aws
{
namespace XRay
{
namespace Model
{

  /**
   */
  class GetSamplingTargetsRequest : public XRayRequest
  {
  public:
    AWS_XRAY_API GetSamplingTargetsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetSamplingTargets"; }

    AWS_XRAY_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Information about rules that the service is using to sample requests.</p>
     */
    inline const Aws::Vector<SamplingStatisticsDocument>& GetSamplingStatisticsDocuments() const { return m_samplingStatisticsDocuments; }
    inline bool SamplingStatisticsDocumentsHasBeenSet() const { return m_samplingStatisticsDocumentsHasBeenSet; }
    template<typename SamplingStatisticsDocumentsT = Aws::Vector<SamplingStatisticsDocument>>
    void SetSamplingStatisticsDocuments(SamplingStatisticsDocumentsT&& value) { m_samplingStatisticsDocumentsHasBeenSet = true; m_samplingStatisticsDocuments = std::forward<SamplingStatisticsDocumentsT>(value); }
    template<typename SamplingStatisticsDocumentsT = Aws::Vector<SamplingStatisticsDocument>>
    GetSamplingTargetsRequest& WithSamplingStatisticsDocuments(SamplingStatisticsDocumentsT&& value) { SetSamplingStatisticsDocuments(std::forward<SamplingStatisticsDocumentsT>(value)); return *this;}
    template<typename SamplingStatisticsDocumentsT = SamplingStatisticsDocument>
    GetSamplingTargetsRequest& AddSamplingStatisticsDocuments(SamplingStatisticsDocumentsT&& value) { m_samplingStatisticsDocumentsHasBeenSet = true; m_samplingStatisticsDocuments.emplace_back(std::forward<SamplingStatisticsDocumentsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<SamplingStatisticsDocument> m_samplingStatisticsDocuments;
    bool m_samplingStatisticsDocumentsHasBeenSet = false;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
