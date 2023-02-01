/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workmail/WorkMail_EXPORTS.h>
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
namespace WorkMail
{
namespace Model
{
  class CreateResourceResult
  {
  public:
    AWS_WORKMAIL_API CreateResourceResult();
    AWS_WORKMAIL_API CreateResourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKMAIL_API CreateResourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The identifier of the new resource.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>The identifier of the new resource.</p>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceId = value; }

    /**
     * <p>The identifier of the new resource.</p>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceId = std::move(value); }

    /**
     * <p>The identifier of the new resource.</p>
     */
    inline void SetResourceId(const char* value) { m_resourceId.assign(value); }

    /**
     * <p>The identifier of the new resource.</p>
     */
    inline CreateResourceResult& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>The identifier of the new resource.</p>
     */
    inline CreateResourceResult& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the new resource.</p>
     */
    inline CreateResourceResult& WithResourceId(const char* value) { SetResourceId(value); return *this;}

  private:

    Aws::String m_resourceId;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
