/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/workspaces/model/WorkspaceResourceAssociation.h>
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
namespace WorkSpaces
{
namespace Model
{
  class AssociateWorkspaceApplicationResult
  {
  public:
    AWS_WORKSPACES_API AssociateWorkspaceApplicationResult();
    AWS_WORKSPACES_API AssociateWorkspaceApplicationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACES_API AssociateWorkspaceApplicationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the association between the specified WorkSpace and the
     * specified application.</p>
     */
    inline const WorkspaceResourceAssociation& GetAssociation() const{ return m_association; }

    /**
     * <p>Information about the association between the specified WorkSpace and the
     * specified application.</p>
     */
    inline void SetAssociation(const WorkspaceResourceAssociation& value) { m_association = value; }

    /**
     * <p>Information about the association between the specified WorkSpace and the
     * specified application.</p>
     */
    inline void SetAssociation(WorkspaceResourceAssociation&& value) { m_association = std::move(value); }

    /**
     * <p>Information about the association between the specified WorkSpace and the
     * specified application.</p>
     */
    inline AssociateWorkspaceApplicationResult& WithAssociation(const WorkspaceResourceAssociation& value) { SetAssociation(value); return *this;}

    /**
     * <p>Information about the association between the specified WorkSpace and the
     * specified application.</p>
     */
    inline AssociateWorkspaceApplicationResult& WithAssociation(WorkspaceResourceAssociation&& value) { SetAssociation(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline AssociateWorkspaceApplicationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline AssociateWorkspaceApplicationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline AssociateWorkspaceApplicationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    WorkspaceResourceAssociation m_association;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
