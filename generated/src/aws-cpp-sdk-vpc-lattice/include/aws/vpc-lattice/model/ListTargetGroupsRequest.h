/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/vpc-lattice/VPCLattice_EXPORTS.h>
#include <aws/vpc-lattice/VPCLatticeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/vpc-lattice/model/TargetGroupType.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace VPCLattice
{
namespace Model
{

  /**
   */
  class ListTargetGroupsRequest : public VPCLatticeRequest
  {
  public:
    AWS_VPCLATTICE_API ListTargetGroupsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListTargetGroups"; }

    AWS_VPCLATTICE_API Aws::String SerializePayload() const override;

    AWS_VPCLATTICE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The maximum number of results to return.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return.</p>
     */
    inline ListTargetGroupsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>A pagination token for the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A pagination token for the next page of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>A pagination token for the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A pagination token for the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>A pagination token for the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A pagination token for the next page of results.</p>
     */
    inline ListTargetGroupsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A pagination token for the next page of results.</p>
     */
    inline ListTargetGroupsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A pagination token for the next page of results.</p>
     */
    inline ListTargetGroupsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The target group type.</p>
     */
    inline const TargetGroupType& GetTargetGroupType() const{ return m_targetGroupType; }

    /**
     * <p>The target group type.</p>
     */
    inline bool TargetGroupTypeHasBeenSet() const { return m_targetGroupTypeHasBeenSet; }

    /**
     * <p>The target group type.</p>
     */
    inline void SetTargetGroupType(const TargetGroupType& value) { m_targetGroupTypeHasBeenSet = true; m_targetGroupType = value; }

    /**
     * <p>The target group type.</p>
     */
    inline void SetTargetGroupType(TargetGroupType&& value) { m_targetGroupTypeHasBeenSet = true; m_targetGroupType = std::move(value); }

    /**
     * <p>The target group type.</p>
     */
    inline ListTargetGroupsRequest& WithTargetGroupType(const TargetGroupType& value) { SetTargetGroupType(value); return *this;}

    /**
     * <p>The target group type.</p>
     */
    inline ListTargetGroupsRequest& WithTargetGroupType(TargetGroupType&& value) { SetTargetGroupType(std::move(value)); return *this;}


    /**
     * <p>The ID or Amazon Resource Name (ARN) of the service.</p>
     */
    inline const Aws::String& GetVpcIdentifier() const{ return m_vpcIdentifier; }

    /**
     * <p>The ID or Amazon Resource Name (ARN) of the service.</p>
     */
    inline bool VpcIdentifierHasBeenSet() const { return m_vpcIdentifierHasBeenSet; }

    /**
     * <p>The ID or Amazon Resource Name (ARN) of the service.</p>
     */
    inline void SetVpcIdentifier(const Aws::String& value) { m_vpcIdentifierHasBeenSet = true; m_vpcIdentifier = value; }

    /**
     * <p>The ID or Amazon Resource Name (ARN) of the service.</p>
     */
    inline void SetVpcIdentifier(Aws::String&& value) { m_vpcIdentifierHasBeenSet = true; m_vpcIdentifier = std::move(value); }

    /**
     * <p>The ID or Amazon Resource Name (ARN) of the service.</p>
     */
    inline void SetVpcIdentifier(const char* value) { m_vpcIdentifierHasBeenSet = true; m_vpcIdentifier.assign(value); }

    /**
     * <p>The ID or Amazon Resource Name (ARN) of the service.</p>
     */
    inline ListTargetGroupsRequest& WithVpcIdentifier(const Aws::String& value) { SetVpcIdentifier(value); return *this;}

    /**
     * <p>The ID or Amazon Resource Name (ARN) of the service.</p>
     */
    inline ListTargetGroupsRequest& WithVpcIdentifier(Aws::String&& value) { SetVpcIdentifier(std::move(value)); return *this;}

    /**
     * <p>The ID or Amazon Resource Name (ARN) of the service.</p>
     */
    inline ListTargetGroupsRequest& WithVpcIdentifier(const char* value) { SetVpcIdentifier(value); return *this;}

  private:

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    TargetGroupType m_targetGroupType;
    bool m_targetGroupTypeHasBeenSet = false;

    Aws::String m_vpcIdentifier;
    bool m_vpcIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
