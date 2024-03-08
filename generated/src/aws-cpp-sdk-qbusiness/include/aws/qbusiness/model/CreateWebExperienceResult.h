/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
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
namespace QBusiness
{
namespace Model
{
  class CreateWebExperienceResult
  {
  public:
    AWS_QBUSINESS_API CreateWebExperienceResult();
    AWS_QBUSINESS_API CreateWebExperienceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QBUSINESS_API CreateWebExperienceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The Amazon Resource Name (ARN) of an Amazon Q web experience.</p>
     */
    inline const Aws::String& GetWebExperienceArn() const{ return m_webExperienceArn; }

    /**
     * <p> The Amazon Resource Name (ARN) of an Amazon Q web experience.</p>
     */
    inline void SetWebExperienceArn(const Aws::String& value) { m_webExperienceArn = value; }

    /**
     * <p> The Amazon Resource Name (ARN) of an Amazon Q web experience.</p>
     */
    inline void SetWebExperienceArn(Aws::String&& value) { m_webExperienceArn = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of an Amazon Q web experience.</p>
     */
    inline void SetWebExperienceArn(const char* value) { m_webExperienceArn.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of an Amazon Q web experience.</p>
     */
    inline CreateWebExperienceResult& WithWebExperienceArn(const Aws::String& value) { SetWebExperienceArn(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of an Amazon Q web experience.</p>
     */
    inline CreateWebExperienceResult& WithWebExperienceArn(Aws::String&& value) { SetWebExperienceArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of an Amazon Q web experience.</p>
     */
    inline CreateWebExperienceResult& WithWebExperienceArn(const char* value) { SetWebExperienceArn(value); return *this;}


    /**
     * <p>The identifier of the Amazon Q web experience.</p>
     */
    inline const Aws::String& GetWebExperienceId() const{ return m_webExperienceId; }

    /**
     * <p>The identifier of the Amazon Q web experience.</p>
     */
    inline void SetWebExperienceId(const Aws::String& value) { m_webExperienceId = value; }

    /**
     * <p>The identifier of the Amazon Q web experience.</p>
     */
    inline void SetWebExperienceId(Aws::String&& value) { m_webExperienceId = std::move(value); }

    /**
     * <p>The identifier of the Amazon Q web experience.</p>
     */
    inline void SetWebExperienceId(const char* value) { m_webExperienceId.assign(value); }

    /**
     * <p>The identifier of the Amazon Q web experience.</p>
     */
    inline CreateWebExperienceResult& WithWebExperienceId(const Aws::String& value) { SetWebExperienceId(value); return *this;}

    /**
     * <p>The identifier of the Amazon Q web experience.</p>
     */
    inline CreateWebExperienceResult& WithWebExperienceId(Aws::String&& value) { SetWebExperienceId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon Q web experience.</p>
     */
    inline CreateWebExperienceResult& WithWebExperienceId(const char* value) { SetWebExperienceId(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateWebExperienceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateWebExperienceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateWebExperienceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_webExperienceArn;

    Aws::String m_webExperienceId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
