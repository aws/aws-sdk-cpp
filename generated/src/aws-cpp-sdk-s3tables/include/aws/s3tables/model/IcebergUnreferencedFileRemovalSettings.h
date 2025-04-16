/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3tables/S3Tables_EXPORTS.h>

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
namespace S3Tables
{
namespace Model
{

  /**
   * <p>Contains details about the unreferenced file removal settings for an Iceberg
   * table bucket.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3tables-2018-05-10/IcebergUnreferencedFileRemovalSettings">AWS
   * API Reference</a></p>
   */
  class IcebergUnreferencedFileRemovalSettings
  {
  public:
    AWS_S3TABLES_API IcebergUnreferencedFileRemovalSettings() = default;
    AWS_S3TABLES_API IcebergUnreferencedFileRemovalSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_S3TABLES_API IcebergUnreferencedFileRemovalSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_S3TABLES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The number of days an object has to be unreferenced before it is marked as
     * non-current.</p>
     */
    inline int GetUnreferencedDays() const { return m_unreferencedDays; }
    inline bool UnreferencedDaysHasBeenSet() const { return m_unreferencedDaysHasBeenSet; }
    inline void SetUnreferencedDays(int value) { m_unreferencedDaysHasBeenSet = true; m_unreferencedDays = value; }
    inline IcebergUnreferencedFileRemovalSettings& WithUnreferencedDays(int value) { SetUnreferencedDays(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of days an object has to be non-current before it is deleted.</p>
     */
    inline int GetNonCurrentDays() const { return m_nonCurrentDays; }
    inline bool NonCurrentDaysHasBeenSet() const { return m_nonCurrentDaysHasBeenSet; }
    inline void SetNonCurrentDays(int value) { m_nonCurrentDaysHasBeenSet = true; m_nonCurrentDays = value; }
    inline IcebergUnreferencedFileRemovalSettings& WithNonCurrentDays(int value) { SetNonCurrentDays(value); return *this;}
    ///@}
  private:

    int m_unreferencedDays{0};
    bool m_unreferencedDaysHasBeenSet = false;

    int m_nonCurrentDays{0};
    bool m_nonCurrentDaysHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Tables
} // namespace Aws
