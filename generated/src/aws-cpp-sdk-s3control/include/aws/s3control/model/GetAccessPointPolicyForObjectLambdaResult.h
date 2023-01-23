/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace S3Control
{
namespace Model
{
  class GetAccessPointPolicyForObjectLambdaResult
  {
  public:
    AWS_S3CONTROL_API GetAccessPointPolicyForObjectLambdaResult();
    AWS_S3CONTROL_API GetAccessPointPolicyForObjectLambdaResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_S3CONTROL_API GetAccessPointPolicyForObjectLambdaResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Object Lambda Access Point resource policy document.</p>
     */
    inline const Aws::String& GetPolicy() const{ return m_policy; }

    /**
     * <p>Object Lambda Access Point resource policy document.</p>
     */
    inline void SetPolicy(const Aws::String& value) { m_policy = value; }

    /**
     * <p>Object Lambda Access Point resource policy document.</p>
     */
    inline void SetPolicy(Aws::String&& value) { m_policy = std::move(value); }

    /**
     * <p>Object Lambda Access Point resource policy document.</p>
     */
    inline void SetPolicy(const char* value) { m_policy.assign(value); }

    /**
     * <p>Object Lambda Access Point resource policy document.</p>
     */
    inline GetAccessPointPolicyForObjectLambdaResult& WithPolicy(const Aws::String& value) { SetPolicy(value); return *this;}

    /**
     * <p>Object Lambda Access Point resource policy document.</p>
     */
    inline GetAccessPointPolicyForObjectLambdaResult& WithPolicy(Aws::String&& value) { SetPolicy(std::move(value)); return *this;}

    /**
     * <p>Object Lambda Access Point resource policy document.</p>
     */
    inline GetAccessPointPolicyForObjectLambdaResult& WithPolicy(const char* value) { SetPolicy(value); return *this;}

  private:

    Aws::String m_policy;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
