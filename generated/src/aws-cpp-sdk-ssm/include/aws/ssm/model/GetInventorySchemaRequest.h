﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class GetInventorySchemaRequest : public SSMRequest
  {
  public:
    AWS_SSM_API GetInventorySchemaRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetInventorySchema"; }

    AWS_SSM_API Aws::String SerializePayload() const override;

    AWS_SSM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The type of inventory item to return.</p>
     */
    inline const Aws::String& GetTypeName() const { return m_typeName; }
    inline bool TypeNameHasBeenSet() const { return m_typeNameHasBeenSet; }
    template<typename TypeNameT = Aws::String>
    void SetTypeName(TypeNameT&& value) { m_typeNameHasBeenSet = true; m_typeName = std::forward<TypeNameT>(value); }
    template<typename TypeNameT = Aws::String>
    GetInventorySchemaRequest& WithTypeName(TypeNameT&& value) { SetTypeName(std::forward<TypeNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetInventorySchemaRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of items to return for this call. The call also returns a
     * token that you can specify in a subsequent call to get the next set of
     * results.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline GetInventorySchemaRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns inventory schemas that support aggregation. For example, this call
     * returns the <code>AWS:InstanceInformation</code> type, because it supports
     * aggregation based on the <code>PlatformName</code>, <code>PlatformType</code>,
     * and <code>PlatformVersion</code> attributes.</p>
     */
    inline bool GetAggregator() const { return m_aggregator; }
    inline bool AggregatorHasBeenSet() const { return m_aggregatorHasBeenSet; }
    inline void SetAggregator(bool value) { m_aggregatorHasBeenSet = true; m_aggregator = value; }
    inline GetInventorySchemaRequest& WithAggregator(bool value) { SetAggregator(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns the sub-type schema for a specified inventory type.</p>
     */
    inline bool GetSubType() const { return m_subType; }
    inline bool SubTypeHasBeenSet() const { return m_subTypeHasBeenSet; }
    inline void SetSubType(bool value) { m_subTypeHasBeenSet = true; m_subType = value; }
    inline GetInventorySchemaRequest& WithSubType(bool value) { SetSubType(value); return *this;}
    ///@}
  private:

    Aws::String m_typeName;
    bool m_typeNameHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    bool m_aggregator{false};
    bool m_aggregatorHasBeenSet = false;

    bool m_subType{false};
    bool m_subTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
