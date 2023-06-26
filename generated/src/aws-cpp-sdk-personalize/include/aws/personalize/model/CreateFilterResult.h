﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/personalize/Personalize_EXPORTS.h>
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
namespace Personalize
{
namespace Model
{
  class CreateFilterResult
  {
  public:
    AWS_PERSONALIZE_API CreateFilterResult();
    AWS_PERSONALIZE_API CreateFilterResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PERSONALIZE_API CreateFilterResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the new filter.</p>
     */
    inline const Aws::String& GetFilterArn() const{ return m_filterArn; }

    /**
     * <p>The ARN of the new filter.</p>
     */
    inline void SetFilterArn(const Aws::String& value) { m_filterArn = value; }

    /**
     * <p>The ARN of the new filter.</p>
     */
    inline void SetFilterArn(Aws::String&& value) { m_filterArn = std::move(value); }

    /**
     * <p>The ARN of the new filter.</p>
     */
    inline void SetFilterArn(const char* value) { m_filterArn.assign(value); }

    /**
     * <p>The ARN of the new filter.</p>
     */
    inline CreateFilterResult& WithFilterArn(const Aws::String& value) { SetFilterArn(value); return *this;}

    /**
     * <p>The ARN of the new filter.</p>
     */
    inline CreateFilterResult& WithFilterArn(Aws::String&& value) { SetFilterArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the new filter.</p>
     */
    inline CreateFilterResult& WithFilterArn(const char* value) { SetFilterArn(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateFilterResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateFilterResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateFilterResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_filterArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
