/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/servicecatalog/model/TagOptionDetail.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace ServiceCatalog
{
namespace Model
{
  class UpdateTagOptionResult
  {
  public:
    AWS_SERVICECATALOG_API UpdateTagOptionResult() = default;
    AWS_SERVICECATALOG_API UpdateTagOptionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVICECATALOG_API UpdateTagOptionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the TagOption.</p>
     */
    inline const TagOptionDetail& GetTagOptionDetail() const { return m_tagOptionDetail; }
    template<typename TagOptionDetailT = TagOptionDetail>
    void SetTagOptionDetail(TagOptionDetailT&& value) { m_tagOptionDetailHasBeenSet = true; m_tagOptionDetail = std::forward<TagOptionDetailT>(value); }
    template<typename TagOptionDetailT = TagOptionDetail>
    UpdateTagOptionResult& WithTagOptionDetail(TagOptionDetailT&& value) { SetTagOptionDetail(std::forward<TagOptionDetailT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateTagOptionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    TagOptionDetail m_tagOptionDetail;
    bool m_tagOptionDetailHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
