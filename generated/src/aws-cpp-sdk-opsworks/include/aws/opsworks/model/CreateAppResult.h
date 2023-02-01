/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworks/OpsWorks_EXPORTS.h>
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
namespace OpsWorks
{
namespace Model
{
  /**
   * <p>Contains the response to a <code>CreateApp</code> request.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/CreateAppResult">AWS
   * API Reference</a></p>
   */
  class CreateAppResult
  {
  public:
    AWS_OPSWORKS_API CreateAppResult();
    AWS_OPSWORKS_API CreateAppResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPSWORKS_API CreateAppResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The app ID.</p>
     */
    inline const Aws::String& GetAppId() const{ return m_appId; }

    /**
     * <p>The app ID.</p>
     */
    inline void SetAppId(const Aws::String& value) { m_appId = value; }

    /**
     * <p>The app ID.</p>
     */
    inline void SetAppId(Aws::String&& value) { m_appId = std::move(value); }

    /**
     * <p>The app ID.</p>
     */
    inline void SetAppId(const char* value) { m_appId.assign(value); }

    /**
     * <p>The app ID.</p>
     */
    inline CreateAppResult& WithAppId(const Aws::String& value) { SetAppId(value); return *this;}

    /**
     * <p>The app ID.</p>
     */
    inline CreateAppResult& WithAppId(Aws::String&& value) { SetAppId(std::move(value)); return *this;}

    /**
     * <p>The app ID.</p>
     */
    inline CreateAppResult& WithAppId(const char* value) { SetAppId(value); return *this;}

  private:

    Aws::String m_appId;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
