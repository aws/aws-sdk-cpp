/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/s3control/model/MultiRegionAccessPointPolicyDocument.h>
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
  class GetMultiRegionAccessPointPolicyResult
  {
  public:
    AWS_S3CONTROL_API GetMultiRegionAccessPointPolicyResult();
    AWS_S3CONTROL_API GetMultiRegionAccessPointPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_S3CONTROL_API GetMultiRegionAccessPointPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The policy associated with the specified Multi-Region Access Point.</p>
     */
    inline const MultiRegionAccessPointPolicyDocument& GetPolicy() const{ return m_policy; }

    /**
     * <p>The policy associated with the specified Multi-Region Access Point.</p>
     */
    inline void SetPolicy(const MultiRegionAccessPointPolicyDocument& value) { m_policy = value; }

    /**
     * <p>The policy associated with the specified Multi-Region Access Point.</p>
     */
    inline void SetPolicy(MultiRegionAccessPointPolicyDocument&& value) { m_policy = std::move(value); }

    /**
     * <p>The policy associated with the specified Multi-Region Access Point.</p>
     */
    inline GetMultiRegionAccessPointPolicyResult& WithPolicy(const MultiRegionAccessPointPolicyDocument& value) { SetPolicy(value); return *this;}

    /**
     * <p>The policy associated with the specified Multi-Region Access Point.</p>
     */
    inline GetMultiRegionAccessPointPolicyResult& WithPolicy(MultiRegionAccessPointPolicyDocument&& value) { SetPolicy(std::move(value)); return *this;}

  private:

    MultiRegionAccessPointPolicyDocument m_policy;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
