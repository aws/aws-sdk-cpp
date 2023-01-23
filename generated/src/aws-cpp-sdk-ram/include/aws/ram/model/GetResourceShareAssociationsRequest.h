/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ram/RAM_EXPORTS.h>
#include <aws/ram/RAMRequest.h>
#include <aws/ram/model/ResourceShareAssociationType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ram/model/ResourceShareAssociationStatus.h>
#include <utility>

namespace Aws
{
namespace RAM
{
namespace Model
{

  /**
   */
  class GetResourceShareAssociationsRequest : public RAMRequest
  {
  public:
    AWS_RAM_API GetResourceShareAssociationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetResourceShareAssociations"; }

    AWS_RAM_API Aws::String SerializePayload() const override;


    /**
     * <p>Specifies whether you want to retrieve the associations that involve a
     * specified resource or principal.</p> <ul> <li> <p> <code>PRINCIPAL</code> – list
     * the principals that are associated with the specified resource share.</p> </li>
     * <li> <p> <code>RESOURCE</code> – list the resources that are associated with the
     * specified resource share.</p> </li> </ul>
     */
    inline const ResourceShareAssociationType& GetAssociationType() const{ return m_associationType; }

    /**
     * <p>Specifies whether you want to retrieve the associations that involve a
     * specified resource or principal.</p> <ul> <li> <p> <code>PRINCIPAL</code> – list
     * the principals that are associated with the specified resource share.</p> </li>
     * <li> <p> <code>RESOURCE</code> – list the resources that are associated with the
     * specified resource share.</p> </li> </ul>
     */
    inline bool AssociationTypeHasBeenSet() const { return m_associationTypeHasBeenSet; }

    /**
     * <p>Specifies whether you want to retrieve the associations that involve a
     * specified resource or principal.</p> <ul> <li> <p> <code>PRINCIPAL</code> – list
     * the principals that are associated with the specified resource share.</p> </li>
     * <li> <p> <code>RESOURCE</code> – list the resources that are associated with the
     * specified resource share.</p> </li> </ul>
     */
    inline void SetAssociationType(const ResourceShareAssociationType& value) { m_associationTypeHasBeenSet = true; m_associationType = value; }

    /**
     * <p>Specifies whether you want to retrieve the associations that involve a
     * specified resource or principal.</p> <ul> <li> <p> <code>PRINCIPAL</code> – list
     * the principals that are associated with the specified resource share.</p> </li>
     * <li> <p> <code>RESOURCE</code> – list the resources that are associated with the
     * specified resource share.</p> </li> </ul>
     */
    inline void SetAssociationType(ResourceShareAssociationType&& value) { m_associationTypeHasBeenSet = true; m_associationType = std::move(value); }

    /**
     * <p>Specifies whether you want to retrieve the associations that involve a
     * specified resource or principal.</p> <ul> <li> <p> <code>PRINCIPAL</code> – list
     * the principals that are associated with the specified resource share.</p> </li>
     * <li> <p> <code>RESOURCE</code> – list the resources that are associated with the
     * specified resource share.</p> </li> </ul>
     */
    inline GetResourceShareAssociationsRequest& WithAssociationType(const ResourceShareAssociationType& value) { SetAssociationType(value); return *this;}

    /**
     * <p>Specifies whether you want to retrieve the associations that involve a
     * specified resource or principal.</p> <ul> <li> <p> <code>PRINCIPAL</code> – list
     * the principals that are associated with the specified resource share.</p> </li>
     * <li> <p> <code>RESOURCE</code> – list the resources that are associated with the
     * specified resource share.</p> </li> </ul>
     */
    inline GetResourceShareAssociationsRequest& WithAssociationType(ResourceShareAssociationType&& value) { SetAssociationType(std::move(value)); return *this;}


    /**
     * <p>Specifies a list of <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> of the resource share whose associations you want to
     * retrieve.</p>
     */
    inline const Aws::Vector<Aws::String>& GetResourceShareArns() const{ return m_resourceShareArns; }

    /**
     * <p>Specifies a list of <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> of the resource share whose associations you want to
     * retrieve.</p>
     */
    inline bool ResourceShareArnsHasBeenSet() const { return m_resourceShareArnsHasBeenSet; }

    /**
     * <p>Specifies a list of <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> of the resource share whose associations you want to
     * retrieve.</p>
     */
    inline void SetResourceShareArns(const Aws::Vector<Aws::String>& value) { m_resourceShareArnsHasBeenSet = true; m_resourceShareArns = value; }

    /**
     * <p>Specifies a list of <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> of the resource share whose associations you want to
     * retrieve.</p>
     */
    inline void SetResourceShareArns(Aws::Vector<Aws::String>&& value) { m_resourceShareArnsHasBeenSet = true; m_resourceShareArns = std::move(value); }

    /**
     * <p>Specifies a list of <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> of the resource share whose associations you want to
     * retrieve.</p>
     */
    inline GetResourceShareAssociationsRequest& WithResourceShareArns(const Aws::Vector<Aws::String>& value) { SetResourceShareArns(value); return *this;}

    /**
     * <p>Specifies a list of <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> of the resource share whose associations you want to
     * retrieve.</p>
     */
    inline GetResourceShareAssociationsRequest& WithResourceShareArns(Aws::Vector<Aws::String>&& value) { SetResourceShareArns(std::move(value)); return *this;}

    /**
     * <p>Specifies a list of <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> of the resource share whose associations you want to
     * retrieve.</p>
     */
    inline GetResourceShareAssociationsRequest& AddResourceShareArns(const Aws::String& value) { m_resourceShareArnsHasBeenSet = true; m_resourceShareArns.push_back(value); return *this; }

    /**
     * <p>Specifies a list of <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> of the resource share whose associations you want to
     * retrieve.</p>
     */
    inline GetResourceShareAssociationsRequest& AddResourceShareArns(Aws::String&& value) { m_resourceShareArnsHasBeenSet = true; m_resourceShareArns.push_back(std::move(value)); return *this; }

    /**
     * <p>Specifies a list of <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Names (ARNs)</a> of the resource share whose associations you want to
     * retrieve.</p>
     */
    inline GetResourceShareAssociationsRequest& AddResourceShareArns(const char* value) { m_resourceShareArnsHasBeenSet = true; m_resourceShareArns.push_back(value); return *this; }


    /**
     * <p>Specifies the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resoure Name (ARN)</a> of the resource whose resource shares you want to
     * retrieve.</p> <p>You cannot specify this parameter if the association type is
     * <code>PRINCIPAL</code>.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>Specifies the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resoure Name (ARN)</a> of the resource whose resource shares you want to
     * retrieve.</p> <p>You cannot specify this parameter if the association type is
     * <code>PRINCIPAL</code>.</p>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p>Specifies the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resoure Name (ARN)</a> of the resource whose resource shares you want to
     * retrieve.</p> <p>You cannot specify this parameter if the association type is
     * <code>PRINCIPAL</code>.</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>Specifies the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resoure Name (ARN)</a> of the resource whose resource shares you want to
     * retrieve.</p> <p>You cannot specify this parameter if the association type is
     * <code>PRINCIPAL</code>.</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p>Specifies the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resoure Name (ARN)</a> of the resource whose resource shares you want to
     * retrieve.</p> <p>You cannot specify this parameter if the association type is
     * <code>PRINCIPAL</code>.</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p>Specifies the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resoure Name (ARN)</a> of the resource whose resource shares you want to
     * retrieve.</p> <p>You cannot specify this parameter if the association type is
     * <code>PRINCIPAL</code>.</p>
     */
    inline GetResourceShareAssociationsRequest& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>Specifies the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resoure Name (ARN)</a> of the resource whose resource shares you want to
     * retrieve.</p> <p>You cannot specify this parameter if the association type is
     * <code>PRINCIPAL</code>.</p>
     */
    inline GetResourceShareAssociationsRequest& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>Specifies the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resoure Name (ARN)</a> of the resource whose resource shares you want to
     * retrieve.</p> <p>You cannot specify this parameter if the association type is
     * <code>PRINCIPAL</code>.</p>
     */
    inline GetResourceShareAssociationsRequest& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    /**
     * <p>Specifies the ID of the principal whose resource shares you want to retrieve.
     * This can be an Amazon Web Services account ID, an organization ID, an
     * organizational unit ID, or the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resoure Name (ARN)</a> of an individual IAM user or role.</p> <p>You cannot
     * specify this parameter if the association type is <code>RESOURCE</code>.</p>
     */
    inline const Aws::String& GetPrincipal() const{ return m_principal; }

    /**
     * <p>Specifies the ID of the principal whose resource shares you want to retrieve.
     * This can be an Amazon Web Services account ID, an organization ID, an
     * organizational unit ID, or the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resoure Name (ARN)</a> of an individual IAM user or role.</p> <p>You cannot
     * specify this parameter if the association type is <code>RESOURCE</code>.</p>
     */
    inline bool PrincipalHasBeenSet() const { return m_principalHasBeenSet; }

    /**
     * <p>Specifies the ID of the principal whose resource shares you want to retrieve.
     * This can be an Amazon Web Services account ID, an organization ID, an
     * organizational unit ID, or the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resoure Name (ARN)</a> of an individual IAM user or role.</p> <p>You cannot
     * specify this parameter if the association type is <code>RESOURCE</code>.</p>
     */
    inline void SetPrincipal(const Aws::String& value) { m_principalHasBeenSet = true; m_principal = value; }

    /**
     * <p>Specifies the ID of the principal whose resource shares you want to retrieve.
     * This can be an Amazon Web Services account ID, an organization ID, an
     * organizational unit ID, or the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resoure Name (ARN)</a> of an individual IAM user or role.</p> <p>You cannot
     * specify this parameter if the association type is <code>RESOURCE</code>.</p>
     */
    inline void SetPrincipal(Aws::String&& value) { m_principalHasBeenSet = true; m_principal = std::move(value); }

    /**
     * <p>Specifies the ID of the principal whose resource shares you want to retrieve.
     * This can be an Amazon Web Services account ID, an organization ID, an
     * organizational unit ID, or the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resoure Name (ARN)</a> of an individual IAM user or role.</p> <p>You cannot
     * specify this parameter if the association type is <code>RESOURCE</code>.</p>
     */
    inline void SetPrincipal(const char* value) { m_principalHasBeenSet = true; m_principal.assign(value); }

    /**
     * <p>Specifies the ID of the principal whose resource shares you want to retrieve.
     * This can be an Amazon Web Services account ID, an organization ID, an
     * organizational unit ID, or the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resoure Name (ARN)</a> of an individual IAM user or role.</p> <p>You cannot
     * specify this parameter if the association type is <code>RESOURCE</code>.</p>
     */
    inline GetResourceShareAssociationsRequest& WithPrincipal(const Aws::String& value) { SetPrincipal(value); return *this;}

    /**
     * <p>Specifies the ID of the principal whose resource shares you want to retrieve.
     * This can be an Amazon Web Services account ID, an organization ID, an
     * organizational unit ID, or the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resoure Name (ARN)</a> of an individual IAM user or role.</p> <p>You cannot
     * specify this parameter if the association type is <code>RESOURCE</code>.</p>
     */
    inline GetResourceShareAssociationsRequest& WithPrincipal(Aws::String&& value) { SetPrincipal(std::move(value)); return *this;}

    /**
     * <p>Specifies the ID of the principal whose resource shares you want to retrieve.
     * This can be an Amazon Web Services account ID, an organization ID, an
     * organizational unit ID, or the <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resoure Name (ARN)</a> of an individual IAM user or role.</p> <p>You cannot
     * specify this parameter if the association type is <code>RESOURCE</code>.</p>
     */
    inline GetResourceShareAssociationsRequest& WithPrincipal(const char* value) { SetPrincipal(value); return *this;}


    /**
     * <p>Specifies that you want to retrieve only associations with this status.</p>
     */
    inline const ResourceShareAssociationStatus& GetAssociationStatus() const{ return m_associationStatus; }

    /**
     * <p>Specifies that you want to retrieve only associations with this status.</p>
     */
    inline bool AssociationStatusHasBeenSet() const { return m_associationStatusHasBeenSet; }

    /**
     * <p>Specifies that you want to retrieve only associations with this status.</p>
     */
    inline void SetAssociationStatus(const ResourceShareAssociationStatus& value) { m_associationStatusHasBeenSet = true; m_associationStatus = value; }

    /**
     * <p>Specifies that you want to retrieve only associations with this status.</p>
     */
    inline void SetAssociationStatus(ResourceShareAssociationStatus&& value) { m_associationStatusHasBeenSet = true; m_associationStatus = std::move(value); }

    /**
     * <p>Specifies that you want to retrieve only associations with this status.</p>
     */
    inline GetResourceShareAssociationsRequest& WithAssociationStatus(const ResourceShareAssociationStatus& value) { SetAssociationStatus(value); return *this;}

    /**
     * <p>Specifies that you want to retrieve only associations with this status.</p>
     */
    inline GetResourceShareAssociationsRequest& WithAssociationStatus(ResourceShareAssociationStatus&& value) { SetAssociationStatus(std::move(value)); return *this;}


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
    inline GetResourceShareAssociationsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Specifies that you want to receive the next page of results. Valid only if
     * you received a <code>NextToken</code> response in the previous request. If you
     * did, it indicates that more output is available. Set this parameter to the value
     * provided by the previous call's <code>NextToken</code> response to request the
     * next page of results.</p>
     */
    inline GetResourceShareAssociationsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Specifies that you want to receive the next page of results. Valid only if
     * you received a <code>NextToken</code> response in the previous request. If you
     * did, it indicates that more output is available. Set this parameter to the value
     * provided by the previous call's <code>NextToken</code> response to request the
     * next page of results.</p>
     */
    inline GetResourceShareAssociationsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


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
    inline GetResourceShareAssociationsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    ResourceShareAssociationType m_associationType;
    bool m_associationTypeHasBeenSet = false;

    Aws::Vector<Aws::String> m_resourceShareArns;
    bool m_resourceShareArnsHasBeenSet = false;

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    Aws::String m_principal;
    bool m_principalHasBeenSet = false;

    ResourceShareAssociationStatus m_associationStatus;
    bool m_associationStatusHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace RAM
} // namespace Aws
