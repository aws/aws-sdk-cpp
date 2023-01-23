/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-sap/SsmSap_EXPORTS.h>
#include <aws/ssm-sap/model/Application.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace SsmSap
{
namespace Model
{
  class GetApplicationResult
  {
  public:
    AWS_SSMSAP_API GetApplicationResult();
    AWS_SSMSAP_API GetApplicationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSMSAP_API GetApplicationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p/>
     */
    inline const Application& GetApplication() const{ return m_application; }

    /**
     * <p/>
     */
    inline void SetApplication(const Application& value) { m_application = value; }

    /**
     * <p/>
     */
    inline void SetApplication(Application&& value) { m_application = std::move(value); }

    /**
     * <p/>
     */
    inline GetApplicationResult& WithApplication(const Application& value) { SetApplication(value); return *this;}

    /**
     * <p/>
     */
    inline GetApplicationResult& WithApplication(Application&& value) { SetApplication(std::move(value)); return *this;}


    /**
     * <p/>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p/>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p/>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p/>
     */
    inline GetApplicationResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p/>
     */
    inline GetApplicationResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline GetApplicationResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p/>
     */
    inline GetApplicationResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p/>
     */
    inline GetApplicationResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p/>
     */
    inline GetApplicationResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p/>
     */
    inline GetApplicationResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p/>
     */
    inline GetApplicationResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p/>
     */
    inline GetApplicationResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }

  private:

    Application m_application;

    Aws::Map<Aws::String, Aws::String> m_tags;
  };

} // namespace Model
} // namespace SsmSap
} // namespace Aws
