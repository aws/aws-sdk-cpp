/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/vpc-lattice/VPCLattice_EXPORTS.h>
#include <aws/vpc-lattice/VPCLatticeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/vpc-lattice/model/Target.h>
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
  class ListTargetsRequest : public VPCLatticeRequest
  {
  public:
    AWS_VPCLATTICE_API ListTargetsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListTargets"; }

    AWS_VPCLATTICE_API Aws::String SerializePayload() const override;

    AWS_VPCLATTICE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The maximum number of results to return.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListTargetsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A pagination token for the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListTargetsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListTargetsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListTargetsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID or ARN of the target group.</p>
     */
    inline const Aws::String& GetTargetGroupIdentifier() const{ return m_targetGroupIdentifier; }
    inline bool TargetGroupIdentifierHasBeenSet() const { return m_targetGroupIdentifierHasBeenSet; }
    inline void SetTargetGroupIdentifier(const Aws::String& value) { m_targetGroupIdentifierHasBeenSet = true; m_targetGroupIdentifier = value; }
    inline void SetTargetGroupIdentifier(Aws::String&& value) { m_targetGroupIdentifierHasBeenSet = true; m_targetGroupIdentifier = std::move(value); }
    inline void SetTargetGroupIdentifier(const char* value) { m_targetGroupIdentifierHasBeenSet = true; m_targetGroupIdentifier.assign(value); }
    inline ListTargetsRequest& WithTargetGroupIdentifier(const Aws::String& value) { SetTargetGroupIdentifier(value); return *this;}
    inline ListTargetsRequest& WithTargetGroupIdentifier(Aws::String&& value) { SetTargetGroupIdentifier(std::move(value)); return *this;}
    inline ListTargetsRequest& WithTargetGroupIdentifier(const char* value) { SetTargetGroupIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The targets.</p>
     */
    inline const Aws::Vector<Target>& GetTargets() const{ return m_targets; }
    inline bool TargetsHasBeenSet() const { return m_targetsHasBeenSet; }
    inline void SetTargets(const Aws::Vector<Target>& value) { m_targetsHasBeenSet = true; m_targets = value; }
    inline void SetTargets(Aws::Vector<Target>&& value) { m_targetsHasBeenSet = true; m_targets = std::move(value); }
    inline ListTargetsRequest& WithTargets(const Aws::Vector<Target>& value) { SetTargets(value); return *this;}
    inline ListTargetsRequest& WithTargets(Aws::Vector<Target>&& value) { SetTargets(std::move(value)); return *this;}
    inline ListTargetsRequest& AddTargets(const Target& value) { m_targetsHasBeenSet = true; m_targets.push_back(value); return *this; }
    inline ListTargetsRequest& AddTargets(Target&& value) { m_targetsHasBeenSet = true; m_targets.push_back(std::move(value)); return *this; }
    ///@}
  private:

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_targetGroupIdentifier;
    bool m_targetGroupIdentifierHasBeenSet = false;

    Aws::Vector<Target> m_targets;
    bool m_targetsHasBeenSet = false;
  };

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
