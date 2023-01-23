/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-sap/SsmSap_EXPORTS.h>
#include <aws/ssm-sap/model/Database.h>
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
  class GetDatabaseResult
  {
  public:
    AWS_SSMSAP_API GetDatabaseResult();
    AWS_SSMSAP_API GetDatabaseResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSMSAP_API GetDatabaseResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p/>
     */
    inline const Database& GetDatabase() const{ return m_database; }

    /**
     * <p/>
     */
    inline void SetDatabase(const Database& value) { m_database = value; }

    /**
     * <p/>
     */
    inline void SetDatabase(Database&& value) { m_database = std::move(value); }

    /**
     * <p/>
     */
    inline GetDatabaseResult& WithDatabase(const Database& value) { SetDatabase(value); return *this;}

    /**
     * <p/>
     */
    inline GetDatabaseResult& WithDatabase(Database&& value) { SetDatabase(std::move(value)); return *this;}


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
    inline GetDatabaseResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p/>
     */
    inline GetDatabaseResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline GetDatabaseResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p/>
     */
    inline GetDatabaseResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p/>
     */
    inline GetDatabaseResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p/>
     */
    inline GetDatabaseResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p/>
     */
    inline GetDatabaseResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p/>
     */
    inline GetDatabaseResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p/>
     */
    inline GetDatabaseResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }

  private:

    Database m_database;

    Aws::Map<Aws::String, Aws::String> m_tags;
  };

} // namespace Model
} // namespace SsmSap
} // namespace Aws
