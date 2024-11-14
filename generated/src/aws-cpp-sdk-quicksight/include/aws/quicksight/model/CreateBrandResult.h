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
  class CreateBrandResult
  {
  public:
    AWS_QUICKSIGHT_API CreateBrandResult();
    AWS_QUICKSIGHT_API CreateBrandResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API CreateBrandResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateBrandResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateBrandResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateBrandResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details of the brand.</p>
     */
    inline const BrandDetail& GetBrandDetail() const{ return m_brandDetail; }
    inline void SetBrandDetail(const BrandDetail& value) { m_brandDetail = value; }
    inline void SetBrandDetail(BrandDetail&& value) { m_brandDetail = std::move(value); }
    inline CreateBrandResult& WithBrandDetail(const BrandDetail& value) { SetBrandDetail(value); return *this;}
    inline CreateBrandResult& WithBrandDetail(BrandDetail&& value) { SetBrandDetail(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The definition of the brand.</p>
     */
    inline const BrandDefinition& GetBrandDefinition() const{ return m_brandDefinition; }
    inline void SetBrandDefinition(const BrandDefinition& value) { m_brandDefinition = value; }
    inline void SetBrandDefinition(BrandDefinition&& value) { m_brandDefinition = std::move(value); }
    inline CreateBrandResult& WithBrandDefinition(const BrandDefinition& value) { SetBrandDefinition(value); return *this;}
    inline CreateBrandResult& WithBrandDefinition(BrandDefinition&& value) { SetBrandDefinition(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_requestId;

    BrandDetail m_brandDetail;

    BrandDefinition m_brandDefinition;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
