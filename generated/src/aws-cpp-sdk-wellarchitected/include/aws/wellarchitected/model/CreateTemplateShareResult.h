/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
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
namespace WellArchitected
{
namespace Model
{
  class CreateTemplateShareResult
  {
  public:
    AWS_WELLARCHITECTED_API CreateTemplateShareResult();
    AWS_WELLARCHITECTED_API CreateTemplateShareResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WELLARCHITECTED_API CreateTemplateShareResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The review template ARN.</p>
     */
    inline const Aws::String& GetTemplateArn() const{ return m_templateArn; }

    /**
     * <p>The review template ARN.</p>
     */
    inline void SetTemplateArn(const Aws::String& value) { m_templateArn = value; }

    /**
     * <p>The review template ARN.</p>
     */
    inline void SetTemplateArn(Aws::String&& value) { m_templateArn = std::move(value); }

    /**
     * <p>The review template ARN.</p>
     */
    inline void SetTemplateArn(const char* value) { m_templateArn.assign(value); }

    /**
     * <p>The review template ARN.</p>
     */
    inline CreateTemplateShareResult& WithTemplateArn(const Aws::String& value) { SetTemplateArn(value); return *this;}

    /**
     * <p>The review template ARN.</p>
     */
    inline CreateTemplateShareResult& WithTemplateArn(Aws::String&& value) { SetTemplateArn(std::move(value)); return *this;}

    /**
     * <p>The review template ARN.</p>
     */
    inline CreateTemplateShareResult& WithTemplateArn(const char* value) { SetTemplateArn(value); return *this;}


    
    inline const Aws::String& GetShareId() const{ return m_shareId; }

    
    inline void SetShareId(const Aws::String& value) { m_shareId = value; }

    
    inline void SetShareId(Aws::String&& value) { m_shareId = std::move(value); }

    
    inline void SetShareId(const char* value) { m_shareId.assign(value); }

    
    inline CreateTemplateShareResult& WithShareId(const Aws::String& value) { SetShareId(value); return *this;}

    
    inline CreateTemplateShareResult& WithShareId(Aws::String&& value) { SetShareId(std::move(value)); return *this;}

    
    inline CreateTemplateShareResult& WithShareId(const char* value) { SetShareId(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateTemplateShareResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateTemplateShareResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateTemplateShareResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_templateArn;

    Aws::String m_shareId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
