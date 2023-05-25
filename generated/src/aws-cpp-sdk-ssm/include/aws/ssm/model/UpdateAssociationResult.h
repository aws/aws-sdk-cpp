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
  class UpdateAssociationResult
  {
  public:
    AWS_SSM_API UpdateAssociationResult();
    AWS_SSM_API UpdateAssociationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSM_API UpdateAssociationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The description of the association that was updated.</p>
     */
    inline const AssociationDescription& GetAssociationDescription() const{ return m_associationDescription; }

    /**
     * <p>The description of the association that was updated.</p>
     */
    inline void SetAssociationDescription(const AssociationDescription& value) { m_associationDescription = value; }

    /**
     * <p>The description of the association that was updated.</p>
     */
    inline void SetAssociationDescription(AssociationDescription&& value) { m_associationDescription = std::move(value); }

    /**
     * <p>The description of the association that was updated.</p>
     */
    inline UpdateAssociationResult& WithAssociationDescription(const AssociationDescription& value) { SetAssociationDescription(value); return *this;}

    /**
     * <p>The description of the association that was updated.</p>
     */
    inline UpdateAssociationResult& WithAssociationDescription(AssociationDescription&& value) { SetAssociationDescription(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateAssociationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateAssociationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateAssociationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    AssociationDescription m_associationDescription;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
