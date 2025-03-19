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
    AWS_SECURITYLAKE_API CustomLogSourceAttributes() = default;
    AWS_SECURITYLAKE_API CustomLogSourceAttributes(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYLAKE_API CustomLogSourceAttributes& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYLAKE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the Glue crawler.</p>
     */
    inline const Aws::String& GetCrawlerArn() const { return m_crawlerArn; }
    inline bool CrawlerArnHasBeenSet() const { return m_crawlerArnHasBeenSet; }
    template<typename CrawlerArnT = Aws::String>
    void SetCrawlerArn(CrawlerArnT&& value) { m_crawlerArnHasBeenSet = true; m_crawlerArn = std::forward<CrawlerArnT>(value); }
    template<typename CrawlerArnT = Aws::String>
    CustomLogSourceAttributes& WithCrawlerArn(CrawlerArnT&& value) { SetCrawlerArn(std::forward<CrawlerArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the Glue database where results are written, such as:
     * <code>arn:aws:daylight:us-east-1::database/sometable/ *</code>.</p>
     */
    inline const Aws::String& GetDatabaseArn() const { return m_databaseArn; }
    inline bool DatabaseArnHasBeenSet() const { return m_databaseArnHasBeenSet; }
    template<typename DatabaseArnT = Aws::String>
    void SetDatabaseArn(DatabaseArnT&& value) { m_databaseArnHasBeenSet = true; m_databaseArn = std::forward<DatabaseArnT>(value); }
    template<typename DatabaseArnT = Aws::String>
    CustomLogSourceAttributes& WithDatabaseArn(DatabaseArnT&& value) { SetDatabaseArn(std::forward<DatabaseArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the Glue table.</p>
     */
    inline const Aws::String& GetTableArn() const { return m_tableArn; }
    inline bool TableArnHasBeenSet() const { return m_tableArnHasBeenSet; }
    template<typename TableArnT = Aws::String>
    void SetTableArn(TableArnT&& value) { m_tableArnHasBeenSet = true; m_tableArn = std::forward<TableArnT>(value); }
    template<typename TableArnT = Aws::String>
    CustomLogSourceAttributes& WithTableArn(TableArnT&& value) { SetTableArn(std::forward<TableArnT>(value)); return *this;}
    ///@}
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
