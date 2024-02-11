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
  class CreateDirectoryRegistrationResult
  {
  public:
    AWS_PCACONNECTORAD_API CreateDirectoryRegistrationResult();
    AWS_PCACONNECTORAD_API CreateDirectoryRegistrationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PCACONNECTORAD_API CreateDirectoryRegistrationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) that was returned when you called <a
     * href="https://docs.aws.amazon.com/pca-connector-ad/latest/APIReference/API_CreateDirectoryRegistration.html">CreateDirectoryRegistration</a>.</p>
     */
    inline const Aws::String& GetDirectoryRegistrationArn() const{ return m_directoryRegistrationArn; }

    /**
     * <p>The Amazon Resource Name (ARN) that was returned when you called <a
     * href="https://docs.aws.amazon.com/pca-connector-ad/latest/APIReference/API_CreateDirectoryRegistration.html">CreateDirectoryRegistration</a>.</p>
     */
    inline void SetDirectoryRegistrationArn(const Aws::String& value) { m_directoryRegistrationArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) that was returned when you called <a
     * href="https://docs.aws.amazon.com/pca-connector-ad/latest/APIReference/API_CreateDirectoryRegistration.html">CreateDirectoryRegistration</a>.</p>
     */
    inline void SetDirectoryRegistrationArn(Aws::String&& value) { m_directoryRegistrationArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that was returned when you called <a
     * href="https://docs.aws.amazon.com/pca-connector-ad/latest/APIReference/API_CreateDirectoryRegistration.html">CreateDirectoryRegistration</a>.</p>
     */
    inline void SetDirectoryRegistrationArn(const char* value) { m_directoryRegistrationArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that was returned when you called <a
     * href="https://docs.aws.amazon.com/pca-connector-ad/latest/APIReference/API_CreateDirectoryRegistration.html">CreateDirectoryRegistration</a>.</p>
     */
    inline CreateDirectoryRegistrationResult& WithDirectoryRegistrationArn(const Aws::String& value) { SetDirectoryRegistrationArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that was returned when you called <a
     * href="https://docs.aws.amazon.com/pca-connector-ad/latest/APIReference/API_CreateDirectoryRegistration.html">CreateDirectoryRegistration</a>.</p>
     */
    inline CreateDirectoryRegistrationResult& WithDirectoryRegistrationArn(Aws::String&& value) { SetDirectoryRegistrationArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that was returned when you called <a
     * href="https://docs.aws.amazon.com/pca-connector-ad/latest/APIReference/API_CreateDirectoryRegistration.html">CreateDirectoryRegistration</a>.</p>
     */
    inline CreateDirectoryRegistrationResult& WithDirectoryRegistrationArn(const char* value) { SetDirectoryRegistrationArn(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateDirectoryRegistrationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateDirectoryRegistrationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateDirectoryRegistrationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_directoryRegistrationArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace PcaConnectorAd
} // namespace Aws
