/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/SecurityControl.h>
#include <aws/securityhub/model/UnprocessedSecurityControl.h>
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
namespace SecurityHub
{
namespace Model
{
  class BatchGetSecurityControlsResult
  {
  public:
    AWS_SECURITYHUB_API BatchGetSecurityControlsResult();
    AWS_SECURITYHUB_API BatchGetSecurityControlsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SECURITYHUB_API BatchGetSecurityControlsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> An array that returns the identifier, Amazon Resource Name (ARN), and other
     * details about a security control. The same information is returned whether the
     * request includes <code>SecurityControlId</code> or
     * <code>SecurityControlArn</code>. </p>
     */
    inline const Aws::Vector<SecurityControl>& GetSecurityControls() const{ return m_securityControls; }

    /**
     * <p> An array that returns the identifier, Amazon Resource Name (ARN), and other
     * details about a security control. The same information is returned whether the
     * request includes <code>SecurityControlId</code> or
     * <code>SecurityControlArn</code>. </p>
     */
    inline void SetSecurityControls(const Aws::Vector<SecurityControl>& value) { m_securityControls = value; }

    /**
     * <p> An array that returns the identifier, Amazon Resource Name (ARN), and other
     * details about a security control. The same information is returned whether the
     * request includes <code>SecurityControlId</code> or
     * <code>SecurityControlArn</code>. </p>
     */
    inline void SetSecurityControls(Aws::Vector<SecurityControl>&& value) { m_securityControls = std::move(value); }

    /**
     * <p> An array that returns the identifier, Amazon Resource Name (ARN), and other
     * details about a security control. The same information is returned whether the
     * request includes <code>SecurityControlId</code> or
     * <code>SecurityControlArn</code>. </p>
     */
    inline BatchGetSecurityControlsResult& WithSecurityControls(const Aws::Vector<SecurityControl>& value) { SetSecurityControls(value); return *this;}

    /**
     * <p> An array that returns the identifier, Amazon Resource Name (ARN), and other
     * details about a security control. The same information is returned whether the
     * request includes <code>SecurityControlId</code> or
     * <code>SecurityControlArn</code>. </p>
     */
    inline BatchGetSecurityControlsResult& WithSecurityControls(Aws::Vector<SecurityControl>&& value) { SetSecurityControls(std::move(value)); return *this;}

    /**
     * <p> An array that returns the identifier, Amazon Resource Name (ARN), and other
     * details about a security control. The same information is returned whether the
     * request includes <code>SecurityControlId</code> or
     * <code>SecurityControlArn</code>. </p>
     */
    inline BatchGetSecurityControlsResult& AddSecurityControls(const SecurityControl& value) { m_securityControls.push_back(value); return *this; }

    /**
     * <p> An array that returns the identifier, Amazon Resource Name (ARN), and other
     * details about a security control. The same information is returned whether the
     * request includes <code>SecurityControlId</code> or
     * <code>SecurityControlArn</code>. </p>
     */
    inline BatchGetSecurityControlsResult& AddSecurityControls(SecurityControl&& value) { m_securityControls.push_back(std::move(value)); return *this; }


    /**
     * <p> A security control (identified with <code>SecurityControlId</code>,
     * <code>SecurityControlArn</code>, or a mix of both parameters) for which details
     * cannot be returned. </p>
     */
    inline const Aws::Vector<UnprocessedSecurityControl>& GetUnprocessedIds() const{ return m_unprocessedIds; }

    /**
     * <p> A security control (identified with <code>SecurityControlId</code>,
     * <code>SecurityControlArn</code>, or a mix of both parameters) for which details
     * cannot be returned. </p>
     */
    inline void SetUnprocessedIds(const Aws::Vector<UnprocessedSecurityControl>& value) { m_unprocessedIds = value; }

    /**
     * <p> A security control (identified with <code>SecurityControlId</code>,
     * <code>SecurityControlArn</code>, or a mix of both parameters) for which details
     * cannot be returned. </p>
     */
    inline void SetUnprocessedIds(Aws::Vector<UnprocessedSecurityControl>&& value) { m_unprocessedIds = std::move(value); }

    /**
     * <p> A security control (identified with <code>SecurityControlId</code>,
     * <code>SecurityControlArn</code>, or a mix of both parameters) for which details
     * cannot be returned. </p>
     */
    inline BatchGetSecurityControlsResult& WithUnprocessedIds(const Aws::Vector<UnprocessedSecurityControl>& value) { SetUnprocessedIds(value); return *this;}

    /**
     * <p> A security control (identified with <code>SecurityControlId</code>,
     * <code>SecurityControlArn</code>, or a mix of both parameters) for which details
     * cannot be returned. </p>
     */
    inline BatchGetSecurityControlsResult& WithUnprocessedIds(Aws::Vector<UnprocessedSecurityControl>&& value) { SetUnprocessedIds(std::move(value)); return *this;}

    /**
     * <p> A security control (identified with <code>SecurityControlId</code>,
     * <code>SecurityControlArn</code>, or a mix of both parameters) for which details
     * cannot be returned. </p>
     */
    inline BatchGetSecurityControlsResult& AddUnprocessedIds(const UnprocessedSecurityControl& value) { m_unprocessedIds.push_back(value); return *this; }

    /**
     * <p> A security control (identified with <code>SecurityControlId</code>,
     * <code>SecurityControlArn</code>, or a mix of both parameters) for which details
     * cannot be returned. </p>
     */
    inline BatchGetSecurityControlsResult& AddUnprocessedIds(UnprocessedSecurityControl&& value) { m_unprocessedIds.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline BatchGetSecurityControlsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline BatchGetSecurityControlsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline BatchGetSecurityControlsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<SecurityControl> m_securityControls;

    Aws::Vector<UnprocessedSecurityControl> m_unprocessedIds;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
