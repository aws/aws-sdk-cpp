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
  class GetContentAssociationResult
  {
  public:
    AWS_QCONNECT_API GetContentAssociationResult();
    AWS_QCONNECT_API GetContentAssociationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QCONNECT_API GetContentAssociationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The association between Amazon Q in Connect content and another resource.</p>
     */
    inline const ContentAssociationData& GetContentAssociation() const{ return m_contentAssociation; }
    inline void SetContentAssociation(const ContentAssociationData& value) { m_contentAssociation = value; }
    inline void SetContentAssociation(ContentAssociationData&& value) { m_contentAssociation = std::move(value); }
    inline GetContentAssociationResult& WithContentAssociation(const ContentAssociationData& value) { SetContentAssociation(value); return *this;}
    inline GetContentAssociationResult& WithContentAssociation(ContentAssociationData&& value) { SetContentAssociation(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetContentAssociationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetContentAssociationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetContentAssociationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    ContentAssociationData m_contentAssociation;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
