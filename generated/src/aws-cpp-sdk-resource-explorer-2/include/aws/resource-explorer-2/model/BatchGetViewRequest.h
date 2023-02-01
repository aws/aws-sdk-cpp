/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resource-explorer-2/ResourceExplorer2_EXPORTS.h>
#include <aws/resource-explorer-2/ResourceExplorer2Request.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ResourceExplorer2
{
namespace Model
{

  /**
   */
  class BatchGetViewRequest : public ResourceExplorer2Request
  {
  public:
    AWS_RESOURCEEXPLORER2_API BatchGetViewRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchGetView"; }

    AWS_RESOURCEEXPLORER2_API Aws::String SerializePayload() const override;


    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * resource names (ARNs)</a> that identify the views you want details for.</p>
     */
    inline const Aws::Vector<Aws::String>& GetViewArns() const{ return m_viewArns; }

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * resource names (ARNs)</a> that identify the views you want details for.</p>
     */
    inline bool ViewArnsHasBeenSet() const { return m_viewArnsHasBeenSet; }

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * resource names (ARNs)</a> that identify the views you want details for.</p>
     */
    inline void SetViewArns(const Aws::Vector<Aws::String>& value) { m_viewArnsHasBeenSet = true; m_viewArns = value; }

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * resource names (ARNs)</a> that identify the views you want details for.</p>
     */
    inline void SetViewArns(Aws::Vector<Aws::String>&& value) { m_viewArnsHasBeenSet = true; m_viewArns = std::move(value); }

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * resource names (ARNs)</a> that identify the views you want details for.</p>
     */
    inline BatchGetViewRequest& WithViewArns(const Aws::Vector<Aws::String>& value) { SetViewArns(value); return *this;}

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * resource names (ARNs)</a> that identify the views you want details for.</p>
     */
    inline BatchGetViewRequest& WithViewArns(Aws::Vector<Aws::String>&& value) { SetViewArns(std::move(value)); return *this;}

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * resource names (ARNs)</a> that identify the views you want details for.</p>
     */
    inline BatchGetViewRequest& AddViewArns(const Aws::String& value) { m_viewArnsHasBeenSet = true; m_viewArns.push_back(value); return *this; }

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * resource names (ARNs)</a> that identify the views you want details for.</p>
     */
    inline BatchGetViewRequest& AddViewArns(Aws::String&& value) { m_viewArnsHasBeenSet = true; m_viewArns.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * resource names (ARNs)</a> that identify the views you want details for.</p>
     */
    inline BatchGetViewRequest& AddViewArns(const char* value) { m_viewArnsHasBeenSet = true; m_viewArns.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_viewArns;
    bool m_viewArnsHasBeenSet = false;
  };

} // namespace Model
} // namespace ResourceExplorer2
} // namespace Aws
