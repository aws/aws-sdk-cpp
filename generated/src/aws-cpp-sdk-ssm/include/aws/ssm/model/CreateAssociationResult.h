/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/model/AssociationDescription.h>
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
  class CreateAssociationResult
  {
  public:
    AWS_SSM_API CreateAssociationResult();
    AWS_SSM_API CreateAssociationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API CreateAssociationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the association.</p>
     */
    inline const AssociationDescription& GetAssociationDescription() const{ return m_associationDescription; }
    inline void SetAssociationDescription(const AssociationDescription& value) { m_associationDescription = value; }
    inline void SetAssociationDescription(AssociationDescription&& value) { m_associationDescription = std::move(value); }
    inline CreateAssociationResult& WithAssociationDescription(const AssociationDescription& value) { SetAssociationDescription(value); return *this;}
    inline CreateAssociationResult& WithAssociationDescription(AssociationDescription&& value) { SetAssociationDescription(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateAssociationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateAssociationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateAssociationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    AssociationDescription m_associationDescription;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
