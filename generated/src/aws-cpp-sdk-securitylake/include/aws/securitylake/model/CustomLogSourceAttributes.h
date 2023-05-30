/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securitylake/SecurityLake_EXPORTS.h>
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
namespace SecurityLake
{
namespace Model
{

  /**
   * <p>The attributes of a third-party custom source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securitylake-2018-05-10/CustomLogSourceAttributes">AWS
   * API Reference</a></p>
   */
  class CustomLogSourceAttributes
  {
  public:
    AWS_SECURITYLAKE_API CustomLogSourceAttributes();
    AWS_SECURITYLAKE_API CustomLogSourceAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYLAKE_API CustomLogSourceAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYLAKE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the Glue crawler.</p>
     */
    inline const Aws::String& GetCrawlerArn() const{ return m_crawlerArn; }

    /**
     * <p>The ARN of the Glue crawler.</p>
     */
    inline bool CrawlerArnHasBeenSet() const { return m_crawlerArnHasBeenSet; }

    /**
     * <p>The ARN of the Glue crawler.</p>
     */
    inline void SetCrawlerArn(const Aws::String& value) { m_crawlerArnHasBeenSet = true; m_crawlerArn = value; }

    /**
     * <p>The ARN of the Glue crawler.</p>
     */
    inline void SetCrawlerArn(Aws::String&& value) { m_crawlerArnHasBeenSet = true; m_crawlerArn = std::move(value); }

    /**
     * <p>The ARN of the Glue crawler.</p>
     */
    inline void SetCrawlerArn(const char* value) { m_crawlerArnHasBeenSet = true; m_crawlerArn.assign(value); }

    /**
     * <p>The ARN of the Glue crawler.</p>
     */
    inline CustomLogSourceAttributes& WithCrawlerArn(const Aws::String& value) { SetCrawlerArn(value); return *this;}

    /**
     * <p>The ARN of the Glue crawler.</p>
     */
    inline CustomLogSourceAttributes& WithCrawlerArn(Aws::String&& value) { SetCrawlerArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the Glue crawler.</p>
     */
    inline CustomLogSourceAttributes& WithCrawlerArn(const char* value) { SetCrawlerArn(value); return *this;}


    /**
     * <p>The ARN of the Glue database where results are written, such as:
     * <code>arn:aws:daylight:us-east-1::database/sometable/ *</code>.</p>
     */
    inline const Aws::String& GetDatabaseArn() const{ return m_databaseArn; }

    /**
     * <p>The ARN of the Glue database where results are written, such as:
     * <code>arn:aws:daylight:us-east-1::database/sometable/ *</code>.</p>
     */
    inline bool DatabaseArnHasBeenSet() const { return m_databaseArnHasBeenSet; }

    /**
     * <p>The ARN of the Glue database where results are written, such as:
     * <code>arn:aws:daylight:us-east-1::database/sometable/ *</code>.</p>
     */
    inline void SetDatabaseArn(const Aws::String& value) { m_databaseArnHasBeenSet = true; m_databaseArn = value; }

    /**
     * <p>The ARN of the Glue database where results are written, such as:
     * <code>arn:aws:daylight:us-east-1::database/sometable/ *</code>.</p>
     */
    inline void SetDatabaseArn(Aws::String&& value) { m_databaseArnHasBeenSet = true; m_databaseArn = std::move(value); }

    /**
     * <p>The ARN of the Glue database where results are written, such as:
     * <code>arn:aws:daylight:us-east-1::database/sometable/ *</code>.</p>
     */
    inline void SetDatabaseArn(const char* value) { m_databaseArnHasBeenSet = true; m_databaseArn.assign(value); }

    /**
     * <p>The ARN of the Glue database where results are written, such as:
     * <code>arn:aws:daylight:us-east-1::database/sometable/ *</code>.</p>
     */
    inline CustomLogSourceAttributes& WithDatabaseArn(const Aws::String& value) { SetDatabaseArn(value); return *this;}

    /**
     * <p>The ARN of the Glue database where results are written, such as:
     * <code>arn:aws:daylight:us-east-1::database/sometable/ *</code>.</p>
     */
    inline CustomLogSourceAttributes& WithDatabaseArn(Aws::String&& value) { SetDatabaseArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the Glue database where results are written, such as:
     * <code>arn:aws:daylight:us-east-1::database/sometable/ *</code>.</p>
     */
    inline CustomLogSourceAttributes& WithDatabaseArn(const char* value) { SetDatabaseArn(value); return *this;}


    /**
     * <p>The ARN of the Glue table.</p>
     */
    inline const Aws::String& GetTableArn() const{ return m_tableArn; }

    /**
     * <p>The ARN of the Glue table.</p>
     */
    inline bool TableArnHasBeenSet() const { return m_tableArnHasBeenSet; }

    /**
     * <p>The ARN of the Glue table.</p>
     */
    inline void SetTableArn(const Aws::String& value) { m_tableArnHasBeenSet = true; m_tableArn = value; }

    /**
     * <p>The ARN of the Glue table.</p>
     */
    inline void SetTableArn(Aws::String&& value) { m_tableArnHasBeenSet = true; m_tableArn = std::move(value); }

    /**
     * <p>The ARN of the Glue table.</p>
     */
    inline void SetTableArn(const char* value) { m_tableArnHasBeenSet = true; m_tableArn.assign(value); }

    /**
     * <p>The ARN of the Glue table.</p>
     */
    inline CustomLogSourceAttributes& WithTableArn(const Aws::String& value) { SetTableArn(value); return *this;}

    /**
     * <p>The ARN of the Glue table.</p>
     */
    inline CustomLogSourceAttributes& WithTableArn(Aws::String&& value) { SetTableArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the Glue table.</p>
     */
    inline CustomLogSourceAttributes& WithTableArn(const char* value) { SetTableArn(value); return *this;}

  private:

    Aws::String m_crawlerArn;
    bool m_crawlerArnHasBeenSet = false;

    Aws::String m_databaseArn;
    bool m_databaseArnHasBeenSet = false;

    Aws::String m_tableArn;
    bool m_tableArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
