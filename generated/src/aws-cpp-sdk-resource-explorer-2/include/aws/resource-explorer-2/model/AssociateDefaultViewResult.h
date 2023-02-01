/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/resource-explorer-2/ResourceExplorer2_EXPORTS.h>
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
namespace ResourceExplorer2
{
namespace Model
{
  class AssociateDefaultViewResult
  {
  public:
    AWS_RESOURCEEXPLORER2_API AssociateDefaultViewResult();
    AWS_RESOURCEEXPLORER2_API AssociateDefaultViewResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RESOURCEEXPLORER2_API AssociateDefaultViewResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * resource name (ARN)</a> of the view that the operation set as the default for
     * queries made in the Amazon Web Services Region and Amazon Web Services account
     * in which you called this operation.</p>
     */
    inline const Aws::String& GetViewArn() const{ return m_viewArn; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * resource name (ARN)</a> of the view that the operation set as the default for
     * queries made in the Amazon Web Services Region and Amazon Web Services account
     * in which you called this operation.</p>
     */
    inline void SetViewArn(const Aws::String& value) { m_viewArn = value; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * resource name (ARN)</a> of the view that the operation set as the default for
     * queries made in the Amazon Web Services Region and Amazon Web Services account
     * in which you called this operation.</p>
     */
    inline void SetViewArn(Aws::String&& value) { m_viewArn = std::move(value); }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * resource name (ARN)</a> of the view that the operation set as the default for
     * queries made in the Amazon Web Services Region and Amazon Web Services account
     * in which you called this operation.</p>
     */
    inline void SetViewArn(const char* value) { m_viewArn.assign(value); }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * resource name (ARN)</a> of the view that the operation set as the default for
     * queries made in the Amazon Web Services Region and Amazon Web Services account
     * in which you called this operation.</p>
     */
    inline AssociateDefaultViewResult& WithViewArn(const Aws::String& value) { SetViewArn(value); return *this;}

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * resource name (ARN)</a> of the view that the operation set as the default for
     * queries made in the Amazon Web Services Region and Amazon Web Services account
     * in which you called this operation.</p>
     */
    inline AssociateDefaultViewResult& WithViewArn(Aws::String&& value) { SetViewArn(std::move(value)); return *this;}

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * resource name (ARN)</a> of the view that the operation set as the default for
     * queries made in the Amazon Web Services Region and Amazon Web Services account
     * in which you called this operation.</p>
     */
    inline AssociateDefaultViewResult& WithViewArn(const char* value) { SetViewArn(value); return *this;}

  private:

    Aws::String m_viewArn;
  };

} // namespace Model
} // namespace ResourceExplorer2
} // namespace Aws
