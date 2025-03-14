﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3control/model/ObjectLambdaAccessPointAlias.h>
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
  class CreateAccessPointForObjectLambdaResult
  {
  public:
    AWS_S3CONTROL_API CreateAccessPointForObjectLambdaResult();
    AWS_S3CONTROL_API CreateAccessPointForObjectLambdaResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_S3CONTROL_API CreateAccessPointForObjectLambdaResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Specifies the ARN for the Object Lambda Access Point.</p>
     */
    inline const Aws::String& GetObjectLambdaAccessPointArn() const{ return m_objectLambdaAccessPointArn; }
    inline void SetObjectLambdaAccessPointArn(const Aws::String& value) { m_objectLambdaAccessPointArn = value; }
    inline void SetObjectLambdaAccessPointArn(Aws::String&& value) { m_objectLambdaAccessPointArn = std::move(value); }
    inline void SetObjectLambdaAccessPointArn(const char* value) { m_objectLambdaAccessPointArn.assign(value); }
    inline CreateAccessPointForObjectLambdaResult& WithObjectLambdaAccessPointArn(const Aws::String& value) { SetObjectLambdaAccessPointArn(value); return *this;}
    inline CreateAccessPointForObjectLambdaResult& WithObjectLambdaAccessPointArn(Aws::String&& value) { SetObjectLambdaAccessPointArn(std::move(value)); return *this;}
    inline CreateAccessPointForObjectLambdaResult& WithObjectLambdaAccessPointArn(const char* value) { SetObjectLambdaAccessPointArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The alias of the Object Lambda Access Point.</p>
     */
    inline const ObjectLambdaAccessPointAlias& GetAlias() const{ return m_alias; }
    inline void SetAlias(const ObjectLambdaAccessPointAlias& value) { m_alias = value; }
    inline void SetAlias(ObjectLambdaAccessPointAlias&& value) { m_alias = std::move(value); }
    inline CreateAccessPointForObjectLambdaResult& WithAlias(const ObjectLambdaAccessPointAlias& value) { SetAlias(value); return *this;}
    inline CreateAccessPointForObjectLambdaResult& WithAlias(ObjectLambdaAccessPointAlias&& value) { SetAlias(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * AWS Request Id value
     */
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateAccessPointForObjectLambdaResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateAccessPointForObjectLambdaResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateAccessPointForObjectLambdaResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}

    ///@{
    /**
     * x-amz-id-2 header value, also known as Host Id
     */
    inline const Aws::String& GetHostId() const{ return m_hostId; }
    inline void SetHostId(const Aws::String& value) { m_hostId = value; }
    inline void SetHostId(Aws::String&& value) { m_hostId = std::move(value); }
    inline void SetHostId(const char* value) { m_hostId.assign(value); }
    inline CreateAccessPointForObjectLambdaResult& WithHostId(const Aws::String& value) { SetHostId(value); return *this;}
    inline CreateAccessPointForObjectLambdaResult& WithHostId(Aws::String&& value) { SetHostId(std::move(value)); return *this;}
    inline CreateAccessPointForObjectLambdaResult& WithHostId(const char* value) { SetHostId(value); return *this;}
    ///@}
  private:

    Aws::String m_objectLambdaAccessPointArn;

    ObjectLambdaAccessPointAlias m_alias;

    Aws::String m_requestId;

    Aws::String m_hostId;
  };

} // namespace Model
} // namespace S3Control
} // namespace Aws
