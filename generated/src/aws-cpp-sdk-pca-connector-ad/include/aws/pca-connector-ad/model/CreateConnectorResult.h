/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pca-connector-ad/PcaConnectorAd_EXPORTS.h>
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
namespace PcaConnectorAd
{
namespace Model
{
  class CreateConnectorResult
  {
  public:
    AWS_PCACONNECTORAD_API CreateConnectorResult();
    AWS_PCACONNECTORAD_API CreateConnectorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PCACONNECTORAD_API CreateConnectorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>If successful, the Amazon Resource Name (ARN) of the connector for Active
     * Directory.</p>
     */
    inline const Aws::String& GetConnectorArn() const{ return m_connectorArn; }

    /**
     * <p>If successful, the Amazon Resource Name (ARN) of the connector for Active
     * Directory.</p>
     */
    inline void SetConnectorArn(const Aws::String& value) { m_connectorArn = value; }

    /**
     * <p>If successful, the Amazon Resource Name (ARN) of the connector for Active
     * Directory.</p>
     */
    inline void SetConnectorArn(Aws::String&& value) { m_connectorArn = std::move(value); }

    /**
     * <p>If successful, the Amazon Resource Name (ARN) of the connector for Active
     * Directory.</p>
     */
    inline void SetConnectorArn(const char* value) { m_connectorArn.assign(value); }

    /**
     * <p>If successful, the Amazon Resource Name (ARN) of the connector for Active
     * Directory.</p>
     */
    inline CreateConnectorResult& WithConnectorArn(const Aws::String& value) { SetConnectorArn(value); return *this;}

    /**
     * <p>If successful, the Amazon Resource Name (ARN) of the connector for Active
     * Directory.</p>
     */
    inline CreateConnectorResult& WithConnectorArn(Aws::String&& value) { SetConnectorArn(std::move(value)); return *this;}

    /**
     * <p>If successful, the Amazon Resource Name (ARN) of the connector for Active
     * Directory.</p>
     */
    inline CreateConnectorResult& WithConnectorArn(const char* value) { SetConnectorArn(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateConnectorResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateConnectorResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateConnectorResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_connectorArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PcaConnectorAd
} // namespace Aws
