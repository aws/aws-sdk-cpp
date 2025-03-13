/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/BrandDetail.h>
#include <aws/quicksight/model/BrandDefinition.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace QuickSight
{
namespace Model
{
  class DescribeBrandResult
  {
  public:
    AWS_QUICKSIGHT_API DescribeBrandResult() = default;
    AWS_QUICKSIGHT_API DescribeBrandResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API DescribeBrandResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeBrandResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details of the brand.</p>
     */
    inline const BrandDetail& GetBrandDetail() const { return m_brandDetail; }
    template<typename BrandDetailT = BrandDetail>
    void SetBrandDetail(BrandDetailT&& value) { m_brandDetailHasBeenSet = true; m_brandDetail = std::forward<BrandDetailT>(value); }
    template<typename BrandDetailT = BrandDetail>
    DescribeBrandResult& WithBrandDetail(BrandDetailT&& value) { SetBrandDetail(std::forward<BrandDetailT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The definition of the brand.</p>
     */
    inline const BrandDefinition& GetBrandDefinition() const { return m_brandDefinition; }
    template<typename BrandDefinitionT = BrandDefinition>
    void SetBrandDefinition(BrandDefinitionT&& value) { m_brandDefinitionHasBeenSet = true; m_brandDefinition = std::forward<BrandDefinitionT>(value); }
    template<typename BrandDefinitionT = BrandDefinition>
    DescribeBrandResult& WithBrandDefinition(BrandDefinitionT&& value) { SetBrandDefinition(std::forward<BrandDefinitionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;

    BrandDetail m_brandDetail;
    bool m_brandDetailHasBeenSet = false;

    BrandDefinition m_brandDefinition;
    bool m_brandDefinitionHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
