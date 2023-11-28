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
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace QBusiness
{
namespace Model
{

  /**
   * <p>Aliases attached to a user id within an Amazon Q application.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/UserAlias">AWS
   * API Reference</a></p>
   */
  class UserAlias
  {
  public:
    AWS_QBUSINESS_API UserAlias();
    AWS_QBUSINESS_API UserAlias(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API UserAlias& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of the data source that the user aliases are associated
     * with.</p>
     */
    inline const Aws::String& GetDataSourceId() const{ return m_dataSourceId; }

    /**
     * <p>The identifier of the data source that the user aliases are associated
     * with.</p>
     */
    inline bool DataSourceIdHasBeenSet() const { return m_dataSourceIdHasBeenSet; }

    /**
     * <p>The identifier of the data source that the user aliases are associated
     * with.</p>
     */
    inline void SetDataSourceId(const Aws::String& value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId = value; }

    /**
     * <p>The identifier of the data source that the user aliases are associated
     * with.</p>
     */
    inline void SetDataSourceId(Aws::String&& value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId = std::move(value); }

    /**
     * <p>The identifier of the data source that the user aliases are associated
     * with.</p>
     */
    inline void SetDataSourceId(const char* value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId.assign(value); }

    /**
     * <p>The identifier of the data source that the user aliases are associated
     * with.</p>
     */
    inline UserAlias& WithDataSourceId(const Aws::String& value) { SetDataSourceId(value); return *this;}

    /**
     * <p>The identifier of the data source that the user aliases are associated
     * with.</p>
     */
    inline UserAlias& WithDataSourceId(Aws::String&& value) { SetDataSourceId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the data source that the user aliases are associated
     * with.</p>
     */
    inline UserAlias& WithDataSourceId(const char* value) { SetDataSourceId(value); return *this;}


    /**
     * <p>The identifier of the index that the user aliases are associated with.</p>
     */
    inline const Aws::String& GetIndexId() const{ return m_indexId; }

    /**
     * <p>The identifier of the index that the user aliases are associated with.</p>
     */
    inline bool IndexIdHasBeenSet() const { return m_indexIdHasBeenSet; }

    /**
     * <p>The identifier of the index that the user aliases are associated with.</p>
     */
    inline void SetIndexId(const Aws::String& value) { m_indexIdHasBeenSet = true; m_indexId = value; }

    /**
     * <p>The identifier of the index that the user aliases are associated with.</p>
     */
    inline void SetIndexId(Aws::String&& value) { m_indexIdHasBeenSet = true; m_indexId = std::move(value); }

    /**
     * <p>The identifier of the index that the user aliases are associated with.</p>
     */
    inline void SetIndexId(const char* value) { m_indexIdHasBeenSet = true; m_indexId.assign(value); }

    /**
     * <p>The identifier of the index that the user aliases are associated with.</p>
     */
    inline UserAlias& WithIndexId(const Aws::String& value) { SetIndexId(value); return *this;}

    /**
     * <p>The identifier of the index that the user aliases are associated with.</p>
     */
    inline UserAlias& WithIndexId(Aws::String&& value) { SetIndexId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the index that the user aliases are associated with.</p>
     */
    inline UserAlias& WithIndexId(const char* value) { SetIndexId(value); return *this;}


    /**
     * <p>The identifier of the user id associated with the user aliases.</p>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }

    /**
     * <p>The identifier of the user id associated with the user aliases.</p>
     */
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }

    /**
     * <p>The identifier of the user id associated with the user aliases.</p>
     */
    inline void SetUserId(const Aws::String& value) { m_userIdHasBeenSet = true; m_userId = value; }

    /**
     * <p>The identifier of the user id associated with the user aliases.</p>
     */
    inline void SetUserId(Aws::String&& value) { m_userIdHasBeenSet = true; m_userId = std::move(value); }

    /**
     * <p>The identifier of the user id associated with the user aliases.</p>
     */
    inline void SetUserId(const char* value) { m_userIdHasBeenSet = true; m_userId.assign(value); }

    /**
     * <p>The identifier of the user id associated with the user aliases.</p>
     */
    inline UserAlias& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}

    /**
     * <p>The identifier of the user id associated with the user aliases.</p>
     */
    inline UserAlias& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the user id associated with the user aliases.</p>
     */
    inline UserAlias& WithUserId(const char* value) { SetUserId(value); return *this;}

  private:

    Aws::String m_dataSourceId;
    bool m_dataSourceIdHasBeenSet = false;

    Aws::String m_indexId;
    bool m_indexIdHasBeenSet = false;

    Aws::String m_userId;
    bool m_userIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
