/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/DocumentPermissionType.h>
#include <utility>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class DescribeDocumentPermissionRequest : public SSMRequest
  {
  public:
    AWS_SSM_API DescribeDocumentPermissionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeDocumentPermission"; }

    AWS_SSM_API Aws::String SerializePayload() const override;

    AWS_SSM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the document for which you are the owner.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline DescribeDocumentPermissionRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline DescribeDocumentPermissionRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline DescribeDocumentPermissionRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The permission type for the document. The permission type can be
     * <i>Share</i>.</p>
     */
    inline const DocumentPermissionType& GetPermissionType() const{ return m_permissionType; }
    inline bool PermissionTypeHasBeenSet() const { return m_permissionTypeHasBeenSet; }
    inline void SetPermissionType(const DocumentPermissionType& value) { m_permissionTypeHasBeenSet = true; m_permissionType = value; }
    inline void SetPermissionType(DocumentPermissionType&& value) { m_permissionTypeHasBeenSet = true; m_permissionType = std::move(value); }
    inline DescribeDocumentPermissionRequest& WithPermissionType(const DocumentPermissionType& value) { SetPermissionType(value); return *this;}
    inline DescribeDocumentPermissionRequest& WithPermissionType(DocumentPermissionType&& value) { SetPermissionType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of items to return for this call. The call also returns a
     * token that you can specify in a subsequent call to get the next set of
     * results.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline DescribeDocumentPermissionRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline DescribeDocumentPermissionRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeDocumentPermissionRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeDocumentPermissionRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    DocumentPermissionType m_permissionType;
    bool m_permissionTypeHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
