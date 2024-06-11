/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
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
namespace SSM
{
namespace Model
{
  class AssociateOpsItemRelatedItemResult
  {
  public:
    AWS_SSM_API AssociateOpsItemRelatedItemResult();
    AWS_SSM_API AssociateOpsItemRelatedItemResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API AssociateOpsItemRelatedItemResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The association ID.</p>
     */
    inline const Aws::String& GetAssociationId() const{ return m_associationId; }
    inline void SetAssociationId(const Aws::String& value) { m_associationId = value; }
    inline void SetAssociationId(Aws::String&& value) { m_associationId = std::move(value); }
    inline void SetAssociationId(const char* value) { m_associationId.assign(value); }
    inline AssociateOpsItemRelatedItemResult& WithAssociationId(const Aws::String& value) { SetAssociationId(value); return *this;}
    inline AssociateOpsItemRelatedItemResult& WithAssociationId(Aws::String&& value) { SetAssociationId(std::move(value)); return *this;}
    inline AssociateOpsItemRelatedItemResult& WithAssociationId(const char* value) { SetAssociationId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline AssociateOpsItemRelatedItemResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline AssociateOpsItemRelatedItemResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline AssociateOpsItemRelatedItemResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_associationId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
