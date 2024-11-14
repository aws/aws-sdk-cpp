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
  class CreateAccessPointResult
  {
  public:
    AWS_S3CONTROL_API CreateAccessPointResult();
    AWS_S3CONTROL_API CreateAccessPointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_S3CONTROL_API CreateAccessPointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The ARN of the access point.</p>  <p>This is only supported by Amazon
     * S3 on Outposts.</p> 
     */
    inline const Aws::String& GetAccessPointArn() const{ return m_accessPointArn; }
    inline void SetAccessPointArn(const Aws::String& value) { m_accessPointArn = value; }
    inline void SetAccessPointArn(Aws::String&& value) { m_accessPointArn = std::move(value); }
    inline void SetAccessPointArn(const char* value) { m_accessPointArn.assign(value); }
    inline CreateAccessPointResult& WithAccessPointArn(const Aws::String& value) { SetAccessPointArn(value); return *this;}
    inline CreateAccessPointResult& WithAccessPointArn(Aws::String&& value) { SetAccessPointArn(std::move(value)); return *this;}
    inline CreateAccessPointResult& WithAccessPointArn(const char* value) { SetAccessPointArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name or alias of the access point.</p>
     */
    inline const Aws::String& GetAlias() const{ return m_alias; }
    inline void SetAlias(const Aws::String& value) { m_alias = value; }
    inline void SetAlias(Aws::String&& value) { m_alias = std::move(value); }
    inline void SetAlias(const char* value) { m_alias.assign(value); }
    inline CreateAccessPointResult& WithAlias(const Aws::String& value) { SetAlias(value); return *this;}
    inline CreateAccessPointResult& WithAlias(Aws::String&& value) { SetAlias(std::move(value)); return *this;}
    inline CreateAccessPointResult& WithAlias(const char* value) { SetAlias(value); return *this;}
    ///@}

    ///@{
    /**
     * AWS Request Id value
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateAccessPointResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateAccessPointResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateAccessPointResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}

    ///@{
    /**
     * x-amz-id-2 header value, also known as Host Id
     */
    inline const Aws::String& GetHostId() const{ return m_hostId; }
    inline void SetHostId(const Aws::String& value) { m_hostId = value; }
    inline void SetHostId(Aws::String&& value) { m_hostId = std::move(value); }
    inline void SetHostId(const char* value) { m_hostId.assign(value); }
    inline CreateAccessPointResult& WithHostId(const Aws::String& value) { SetHostId(value); return *this;}
    inline CreateAccessPointResult& WithHostId(Aws::String&& value) { SetHostId(std::move(value)); return *this;}
    inline CreateAccessPointResult& WithHostId(const char* value) { SetHostId(value); return *this;}
    ///@}
  private:

    Aws::String m_accessPointArn;

    Aws::String m_alias;

    Aws::String m_requestId;

    Aws::String m_hostId;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
