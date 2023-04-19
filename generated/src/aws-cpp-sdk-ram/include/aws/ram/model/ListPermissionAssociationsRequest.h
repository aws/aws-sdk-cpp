/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ram/RAM_EXPORTS.h>
#include <aws/ram/RAMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ram/model/ResourceShareAssociationStatus.h>
#include <aws/ram/model/PermissionFeatureSet.h>
#include <utility>

namespace Aws
{
namespace RAM
{
namespace Model
{

  /**
   */
  class ListPermissionAssociationsRequest : public RAMRequest
  {
  public:
    AWS_RAM_API ListPermissionAssociationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListPermissionAssociations"; }

    AWS_RAM_API Aws::String SerializePayload() const override;


    /**
     * <p>Specifies the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of the managed permission.</p>
     */
    inline const Aws::String& GetPermissionArn() const{ return m_permissionArn; }

    /**
     * <p>Specifies the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of the managed permission.</p>
     */
    inline bool PermissionArnHasBeenSet() const { return m_permissionArnHasBeenSet; }

    /**
     * <p>Specifies the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of the managed permission.</p>
     */
    inline void SetPermissionArn(const Aws::String& value) { m_permissionArnHasBeenSet = true; m_permissionArn = value; }

    /**
     * <p>Specifies the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of the managed permission.</p>
     */
    inline void SetPermissionArn(Aws::String&& value) { m_permissionArnHasBeenSet = true; m_permissionArn = std::move(value); }

    /**
     * <p>Specifies the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of the managed permission.</p>
     */
    inline void SetPermissionArn(const char* value) { m_permissionArnHasBeenSet = true; m_permissionArn.assign(value); }

    /**
     * <p>Specifies the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of the managed permission.</p>
     */
    inline ListPermissionAssociationsRequest& WithPermissionArn(const Aws::String& value) { SetPermissionArn(value); return *this;}

    /**
     * <p>Specifies the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of the managed permission.</p>
     */
    inline ListPermissionAssociationsRequest& WithPermissionArn(Aws::String&& value) { SetPermissionArn(std::move(value)); return *this;}

    /**
     * <p>Specifies the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of the managed permission.</p>
     */
    inline ListPermissionAssociationsRequest& WithPermissionArn(const char* value) { SetPermissionArn(value); return *this;}


    /**
     * <p>Specifies that you want to list only those associations with resource shares
     * that use this version of the managed permission. If you don't provide a value
     * for this parameter, then the operation returns information about associations
     * with resource shares that use any version of the managed permission.</p>
     */
    inline int GetPermissionVersion() const{ return m_permissionVersion; }

    /**
     * <p>Specifies that you want to list only those associations with resource shares
     * that use this version of the managed permission. If you don't provide a value
     * for this parameter, then the operation returns information about associations
     * with resource shares that use any version of the managed permission.</p>
     */
    inline bool PermissionVersionHasBeenSet() const { return m_permissionVersionHasBeenSet; }

    /**
     * <p>Specifies that you want to list only those associations with resource shares
     * that use this version of the managed permission. If you don't provide a value
     * for this parameter, then the operation returns information about associations
     * with resource shares that use any version of the managed permission.</p>
     */
    inline void SetPermissionVersion(int value) { m_permissionVersionHasBeenSet = true; m_permissionVersion = value; }

    /**
     * <p>Specifies that you want to list only those associations with resource shares
     * that use this version of the managed permission. If you don't provide a value
     * for this parameter, then the operation returns information about associations
     * with resource shares that use any version of the managed permission.</p>
     */
    inline ListPermissionAssociationsRequest& WithPermissionVersion(int value) { SetPermissionVersion(value); return *this;}


    /**
     * <p>Specifies that you want to list only those associations with resource shares
     * that match this status.</p>
     */
    inline const ResourceShareAssociationStatus& GetAssociationStatus() const{ return m_associationStatus; }

    /**
     * <p>Specifies that you want to list only those associations with resource shares
     * that match this status.</p>
     */
    inline bool AssociationStatusHasBeenSet() const { return m_associationStatusHasBeenSet; }

    /**
     * <p>Specifies that you want to list only those associations with resource shares
     * that match this status.</p>
     */
    inline void SetAssociationStatus(const ResourceShareAssociationStatus& value) { m_associationStatusHasBeenSet = true; m_associationStatus = value; }

    /**
     * <p>Specifies that you want to list only those associations with resource shares
     * that match this status.</p>
     */
    inline void SetAssociationStatus(ResourceShareAssociationStatus&& value) { m_associationStatusHasBeenSet = true; m_associationStatus = std::move(value); }

    /**
     * <p>Specifies that you want to list only those associations with resource shares
     * that match this status.</p>
     */
    inline ListPermissionAssociationsRequest& WithAssociationStatus(const ResourceShareAssociationStatus& value) { SetAssociationStatus(value); return *this;}

    /**
     * <p>Specifies that you want to list only those associations with resource shares
     * that match this status.</p>
     */
    inline ListPermissionAssociationsRequest& WithAssociationStatus(ResourceShareAssociationStatus&& value) { SetAssociationStatus(std::move(value)); return *this;}


    /**
     * <p>Specifies that you want to list only those associations with resource shares
     * that include at least one resource of this resource type.</p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>Specifies that you want to list only those associations with resource shares
     * that include at least one resource of this resource type.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>Specifies that you want to list only those associations with resource shares
     * that include at least one resource of this resource type.</p>
     */
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>Specifies that you want to list only those associations with resource shares
     * that include at least one resource of this resource type.</p>
     */
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>Specifies that you want to list only those associations with resource shares
     * that include at least one resource of this resource type.</p>
     */
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }

    /**
     * <p>Specifies that you want to list only those associations with resource shares
     * that include at least one resource of this resource type.</p>
     */
    inline ListPermissionAssociationsRequest& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}

    /**
     * <p>Specifies that you want to list only those associations with resource shares
     * that include at least one resource of this resource type.</p>
     */
    inline ListPermissionAssociationsRequest& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}

    /**
     * <p>Specifies that you want to list only those associations with resource shares
     * that include at least one resource of this resource type.</p>
     */
    inline ListPermissionAssociationsRequest& WithResourceType(const char* value) { SetResourceType(value); return *this;}


    /**
     * <p>Specifies that you want to list only those associations with resource shares
     * that have a <code>featureSet</code> with this value.</p>
     */
    inline const PermissionFeatureSet& GetFeatureSet() const{ return m_featureSet; }

    /**
     * <p>Specifies that you want to list only those associations with resource shares
     * that have a <code>featureSet</code> with this value.</p>
     */
    inline bool FeatureSetHasBeenSet() const { return m_featureSetHasBeenSet; }

    /**
     * <p>Specifies that you want to list only those associations with resource shares
     * that have a <code>featureSet</code> with this value.</p>
     */
    inline void SetFeatureSet(const PermissionFeatureSet& value) { m_featureSetHasBeenSet = true; m_featureSet = value; }

    /**
     * <p>Specifies that you want to list only those associations with resource shares
     * that have a <code>featureSet</code> with this value.</p>
     */
    inline void SetFeatureSet(PermissionFeatureSet&& value) { m_featureSetHasBeenSet = true; m_featureSet = std::move(value); }

    /**
     * <p>Specifies that you want to list only those associations with resource shares
     * that have a <code>featureSet</code> with this value.</p>
     */
    inline ListPermissionAssociationsRequest& WithFeatureSet(const PermissionFeatureSet& value) { SetFeatureSet(value); return *this;}

    /**
     * <p>Specifies that you want to list only those associations with resource shares
     * that have a <code>featureSet</code> with this value.</p>
     */
    inline ListPermissionAssociationsRequest& WithFeatureSet(PermissionFeatureSet&& value) { SetFeatureSet(std::move(value)); return *this;}


    /**
     * <p>When <code>true</code>, specifies that you want to list only those
     * associations with resource shares that use the default version of the specified
     * managed permission.</p> <p>When <code>false</code> (the default value), lists
     * associations with resource shares that use any version of the specified managed
     * permission.</p>
     */
    inline bool GetDefaultVersion() const{ return m_defaultVersion; }

    /**
     * <p>When <code>true</code>, specifies that you want to list only those
     * associations with resource shares that use the default version of the specified
     * managed permission.</p> <p>When <code>false</code> (the default value), lists
     * associations with resource shares that use any version of the specified managed
     * permission.</p>
     */
    inline bool DefaultVersionHasBeenSet() const { return m_defaultVersionHasBeenSet; }

    /**
     * <p>When <code>true</code>, specifies that you want to list only those
     * associations with resource shares that use the default version of the specified
     * managed permission.</p> <p>When <code>false</code> (the default value), lists
     * associations with resource shares that use any version of the specified managed
     * permission.</p>
     */
    inline void SetDefaultVersion(bool value) { m_defaultVersionHasBeenSet = true; m_defaultVersion = value; }

    /**
     * <p>When <code>true</code>, specifies that you want to list only those
     * associations with resource shares that use the default version of the specified
     * managed permission.</p> <p>When <code>false</code> (the default value), lists
     * associations with resource shares that use any version of the specified managed
     * permission.</p>
     */
    inline ListPermissionAssociationsRequest& WithDefaultVersion(bool value) { SetDefaultVersion(value); return *this;}


    /**
     * <p>Specifies that you want to receive the next page of results. Valid only if
     * you received a <code>NextToken</code> response in the previous request. If you
     * did, it indicates that more output is available. Set this parameter to the value
     * provided by the previous call's <code>NextToken</code> response to request the
     * next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Specifies that you want to receive the next page of results. Valid only if
     * you received a <code>NextToken</code> response in the previous request. If you
     * did, it indicates that more output is available. Set this parameter to the value
     * provided by the previous call's <code>NextToken</code> response to request the
     * next page of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>Specifies that you want to receive the next page of results. Valid only if
     * you received a <code>NextToken</code> response in the previous request. If you
     * did, it indicates that more output is available. Set this parameter to the value
     * provided by the previous call's <code>NextToken</code> response to request the
     * next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>Specifies that you want to receive the next page of results. Valid only if
     * you received a <code>NextToken</code> response in the previous request. If you
     * did, it indicates that more output is available. Set this parameter to the value
     * provided by the previous call's <code>NextToken</code> response to request the
     * next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>Specifies that you want to receive the next page of results. Valid only if
     * you received a <code>NextToken</code> response in the previous request. If you
     * did, it indicates that more output is available. Set this parameter to the value
     * provided by the previous call's <code>NextToken</code> response to request the
     * next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>Specifies that you want to receive the next page of results. Valid only if
     * you received a <code>NextToken</code> response in the previous request. If you
     * did, it indicates that more output is available. Set this parameter to the value
     * provided by the previous call's <code>NextToken</code> response to request the
     * next page of results.</p>
     */
    inline ListPermissionAssociationsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Specifies that you want to receive the next page of results. Valid only if
     * you received a <code>NextToken</code> response in the previous request. If you
     * did, it indicates that more output is available. Set this parameter to the value
     * provided by the previous call's <code>NextToken</code> response to request the
     * next page of results.</p>
     */
    inline ListPermissionAssociationsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Specifies that you want to receive the next page of results. Valid only if
     * you received a <code>NextToken</code> response in the previous request. If you
     * did, it indicates that more output is available. Set this parameter to the value
     * provided by the previous call's <code>NextToken</code> response to request the
     * next page of results.</p>
     */
    inline ListPermissionAssociationsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Specifies the total number of results that you want included on each page of
     * the response. If you do not include this parameter, it defaults to a value that
     * is specific to the operation. If additional items exist beyond the number you
     * specify, the <code>NextToken</code> response element is returned with a value
     * (not null). Include the specified value as the <code>NextToken</code> request
     * parameter in the next call to the operation to get the next part of the results.
     * Note that the service might return fewer results than the maximum even when
     * there are more results available. You should check <code>NextToken</code> after
     * every operation to ensure that you receive all of the results.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>Specifies the total number of results that you want included on each page of
     * the response. If you do not include this parameter, it defaults to a value that
     * is specific to the operation. If additional items exist beyond the number you
     * specify, the <code>NextToken</code> response element is returned with a value
     * (not null). Include the specified value as the <code>NextToken</code> request
     * parameter in the next call to the operation to get the next part of the results.
     * Note that the service might return fewer results than the maximum even when
     * there are more results available. You should check <code>NextToken</code> after
     * every operation to ensure that you receive all of the results.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>Specifies the total number of results that you want included on each page of
     * the response. If you do not include this parameter, it defaults to a value that
     * is specific to the operation. If additional items exist beyond the number you
     * specify, the <code>NextToken</code> response element is returned with a value
     * (not null). Include the specified value as the <code>NextToken</code> request
     * parameter in the next call to the operation to get the next part of the results.
     * Note that the service might return fewer results than the maximum even when
     * there are more results available. You should check <code>NextToken</code> after
     * every operation to ensure that you receive all of the results.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>Specifies the total number of results that you want included on each page of
     * the response. If you do not include this parameter, it defaults to a value that
     * is specific to the operation. If additional items exist beyond the number you
     * specify, the <code>NextToken</code> response element is returned with a value
     * (not null). Include the specified value as the <code>NextToken</code> request
     * parameter in the next call to the operation to get the next part of the results.
     * Note that the service might return fewer results than the maximum even when
     * there are more results available. You should check <code>NextToken</code> after
     * every operation to ensure that you receive all of the results.</p>
     */
    inline ListPermissionAssociationsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_permissionArn;
    bool m_permissionArnHasBeenSet = false;

    int m_permissionVersion;
    bool m_permissionVersionHasBeenSet = false;

    ResourceShareAssociationStatus m_associationStatus;
    bool m_associationStatusHasBeenSet = false;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    PermissionFeatureSet m_featureSet;
    bool m_featureSetHasBeenSet = false;

    bool m_defaultVersion;
    bool m_defaultVersionHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace RAM
} // namespace Aws
