/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ram/RAM_EXPORTS.h>
#include <aws/ram/model/ResourceShare.h>
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
namespace RAM
{
namespace Model
{
  class CreateResourceShareResult
  {
  public:
    AWS_RAM_API CreateResourceShareResult();
    AWS_RAM_API CreateResourceShareResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_RAM_API CreateResourceShareResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An object with information about the new resource share.</p>
     */
    inline const ResourceShare& GetResourceShare() const{ return m_resourceShare; }

    /**
     * <p>An object with information about the new resource share.</p>
     */
    inline void SetResourceShare(const ResourceShare& value) { m_resourceShare = value; }

    /**
     * <p>An object with information about the new resource share.</p>
     */
    inline void SetResourceShare(ResourceShare&& value) { m_resourceShare = std::move(value); }

    /**
     * <p>An object with information about the new resource share.</p>
     */
    inline CreateResourceShareResult& WithResourceShare(const ResourceShare& value) { SetResourceShare(value); return *this;}

    /**
     * <p>An object with information about the new resource share.</p>
     */
    inline CreateResourceShareResult& WithResourceShare(ResourceShare&& value) { SetResourceShare(std::move(value)); return *this;}


    /**
     * <p>The idempotency identifier associated with this request. If you want to
     * repeat the same operation in an idempotent manner then you must include this
     * value in the <code>clientToken</code> request parameter of that later call. All
     * other parameters must also have the same values that you used in the first
     * call.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>The idempotency identifier associated with this request. If you want to
     * repeat the same operation in an idempotent manner then you must include this
     * value in the <code>clientToken</code> request parameter of that later call. All
     * other parameters must also have the same values that you used in the first
     * call.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientToken = value; }

    /**
     * <p>The idempotency identifier associated with this request. If you want to
     * repeat the same operation in an idempotent manner then you must include this
     * value in the <code>clientToken</code> request parameter of that later call. All
     * other parameters must also have the same values that you used in the first
     * call.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientToken = std::move(value); }

    /**
     * <p>The idempotency identifier associated with this request. If you want to
     * repeat the same operation in an idempotent manner then you must include this
     * value in the <code>clientToken</code> request parameter of that later call. All
     * other parameters must also have the same values that you used in the first
     * call.</p>
     */
    inline void SetClientToken(const char* value) { m_clientToken.assign(value); }

    /**
     * <p>The idempotency identifier associated with this request. If you want to
     * repeat the same operation in an idempotent manner then you must include this
     * value in the <code>clientToken</code> request parameter of that later call. All
     * other parameters must also have the same values that you used in the first
     * call.</p>
     */
    inline CreateResourceShareResult& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>The idempotency identifier associated with this request. If you want to
     * repeat the same operation in an idempotent manner then you must include this
     * value in the <code>clientToken</code> request parameter of that later call. All
     * other parameters must also have the same values that you used in the first
     * call.</p>
     */
    inline CreateResourceShareResult& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>The idempotency identifier associated with this request. If you want to
     * repeat the same operation in an idempotent manner then you must include this
     * value in the <code>clientToken</code> request parameter of that later call. All
     * other parameters must also have the same values that you used in the first
     * call.</p>
     */
    inline CreateResourceShareResult& WithClientToken(const char* value) { SetClientToken(value); return *this;}

  private:

    ResourceShare m_resourceShare;

    Aws::String m_clientToken;
  };

} // namespace Model
} // namespace RAM
} // namespace Aws
