﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-write/TimestreamWrite_EXPORTS.h>
#include <aws/timestream-write/TimestreamWriteRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace TimestreamWrite
{
namespace Model
{

  /**
   */
  class DescribeDatabaseRequest : public TimestreamWriteRequest
  {
  public:
    AWS_TIMESTREAMWRITE_API DescribeDatabaseRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeDatabase"; }

    AWS_TIMESTREAMWRITE_API Aws::String SerializePayload() const override;

    AWS_TIMESTREAMWRITE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the Timestream database.</p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }
    inline DescribeDatabaseRequest& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}
    inline DescribeDatabaseRequest& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}
    inline DescribeDatabaseRequest& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}
    ///@}
  private:

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;
  };

} // namespace Model
} // namespace TimestreamWrite
} // namespace Aws
