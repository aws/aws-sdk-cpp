/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/model/ContentAssociationData.h>
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
namespace QConnect
{
namespace Model
{
  class CreateContentAssociationResult
  {
  public:
    AWS_QCONNECT_API CreateContentAssociationResult() = default;
    AWS_QCONNECT_API CreateContentAssociationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QCONNECT_API CreateContentAssociationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The association between Amazon Q in Connect content and another resource.</p>
     */
    inline const ContentAssociationData& GetContentAssociation() const { return m_contentAssociation; }
    template<typename ContentAssociationT = ContentAssociationData>
    void SetContentAssociation(ContentAssociationT&& value) { m_contentAssociationHasBeenSet = true; m_contentAssociation = std::forward<ContentAssociationT>(value); }
    template<typename ContentAssociationT = ContentAssociationData>
    CreateContentAssociationResult& WithContentAssociation(ContentAssociationT&& value) { SetContentAssociation(std::forward<ContentAssociationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateContentAssociationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ContentAssociationData m_contentAssociation;
    bool m_contentAssociationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
