/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/s3control/model/PublicAccessBlockConfiguration.h>
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
  class GetPublicAccessBlockResult
  {
  public:
    AWS_S3CONTROL_API GetPublicAccessBlockResult();
    AWS_S3CONTROL_API GetPublicAccessBlockResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_S3CONTROL_API GetPublicAccessBlockResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The <code>PublicAccessBlock</code> configuration currently in effect for this
     * Amazon Web Services account.</p>
     */
    inline const PublicAccessBlockConfiguration& GetPublicAccessBlockConfiguration() const{ return m_publicAccessBlockConfiguration; }

    /**
     * <p>The <code>PublicAccessBlock</code> configuration currently in effect for this
     * Amazon Web Services account.</p>
     */
    inline void SetPublicAccessBlockConfiguration(const PublicAccessBlockConfiguration& value) { m_publicAccessBlockConfiguration = value; }

    /**
     * <p>The <code>PublicAccessBlock</code> configuration currently in effect for this
     * Amazon Web Services account.</p>
     */
    inline void SetPublicAccessBlockConfiguration(PublicAccessBlockConfiguration&& value) { m_publicAccessBlockConfiguration = std::move(value); }

    /**
     * <p>The <code>PublicAccessBlock</code> configuration currently in effect for this
     * Amazon Web Services account.</p>
     */
    inline GetPublicAccessBlockResult& WithPublicAccessBlockConfiguration(const PublicAccessBlockConfiguration& value) { SetPublicAccessBlockConfiguration(value); return *this;}

    /**
     * <p>The <code>PublicAccessBlock</code> configuration currently in effect for this
     * Amazon Web Services account.</p>
     */
    inline GetPublicAccessBlockResult& WithPublicAccessBlockConfiguration(PublicAccessBlockConfiguration&& value) { SetPublicAccessBlockConfiguration(std::move(value)); return *this;}

  private:

    PublicAccessBlockConfiguration m_publicAccessBlockConfiguration;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
