/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3/S3_EXPORTS.h>
#include <aws/s3/model/InventoryConfigurationState.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3/model/ErrorDetails.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace S3
{
namespace Model
{

  /**
   * <p> The inventory table configuration for an S3 Metadata configuration.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/InventoryTableConfigurationResult">AWS
   * API Reference</a></p>
   */
  class InventoryTableConfigurationResult
  {
  public:
    AWS_S3_API InventoryTableConfigurationResult() = default;
    AWS_S3_API InventoryTableConfigurationResult(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3_API InventoryTableConfigurationResult& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p> The configuration state of the inventory table, indicating whether the
     * inventory table is enabled or disabled. </p>
     */
    inline InventoryConfigurationState GetConfigurationState() const { return m_configurationState; }
    inline bool ConfigurationStateHasBeenSet() const { return m_configurationStateHasBeenSet; }
    inline void SetConfigurationState(InventoryConfigurationState value) { m_configurationStateHasBeenSet = true; m_configurationState = value; }
    inline InventoryTableConfigurationResult& WithConfigurationState(InventoryConfigurationState value) { SetConfigurationState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The status of the inventory table. The status values are: </p> <ul> <li> <p>
     * <code>CREATING</code> - The inventory table is in the process of being created
     * in the specified Amazon Web Services managed table bucket.</p> </li> <li> <p>
     * <code>BACKFILLING</code> - The inventory table is in the process of being
     * backfilled. When you enable the inventory table for your metadata configuration,
     * the table goes through a process known as backfilling, during which Amazon S3
     * scans your general purpose bucket to retrieve the initial metadata for all
     * objects in the bucket. Depending on the number of objects in your bucket, this
     * process can take several hours. When the backfilling process is finished, the
     * status of your inventory table changes from <code>BACKFILLING</code> to
     * <code>ACTIVE</code>. After backfilling is completed, updates to your objects are
     * reflected in the inventory table within one hour.</p> </li> <li> <p>
     * <code>ACTIVE</code> - The inventory table has been created successfully, and
     * records are being delivered to the table. </p> </li> <li> <p>
     * <code>FAILED</code> - Amazon S3 is unable to create the inventory table, or
     * Amazon S3 is unable to deliver records.</p> </li> </ul>
     */
    inline const Aws::String& GetTableStatus() const { return m_tableStatus; }
    inline bool TableStatusHasBeenSet() const { return m_tableStatusHasBeenSet; }
    template<typename TableStatusT = Aws::String>
    void SetTableStatus(TableStatusT&& value) { m_tableStatusHasBeenSet = true; m_tableStatus = std::forward<TableStatusT>(value); }
    template<typename TableStatusT = Aws::String>
    InventoryTableConfigurationResult& WithTableStatus(TableStatusT&& value) { SetTableStatus(std::forward<TableStatusT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ErrorDetails& GetError() const { return m_error; }
    inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }
    template<typename ErrorT = ErrorDetails>
    void SetError(ErrorT&& value) { m_errorHasBeenSet = true; m_error = std::forward<ErrorT>(value); }
    template<typename ErrorT = ErrorDetails>
    InventoryTableConfigurationResult& WithError(ErrorT&& value) { SetError(std::forward<ErrorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the inventory table. </p>
     */
    inline const Aws::String& GetTableName() const { return m_tableName; }
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }
    template<typename TableNameT = Aws::String>
    void SetTableName(TableNameT&& value) { m_tableNameHasBeenSet = true; m_tableName = std::forward<TableNameT>(value); }
    template<typename TableNameT = Aws::String>
    InventoryTableConfigurationResult& WithTableName(TableNameT&& value) { SetTableName(std::forward<TableNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) for the inventory table. </p>
     */
    inline const Aws::String& GetTableArn() const { return m_tableArn; }
    inline bool TableArnHasBeenSet() const { return m_tableArnHasBeenSet; }
    template<typename TableArnT = Aws::String>
    void SetTableArn(TableArnT&& value) { m_tableArnHasBeenSet = true; m_tableArn = std::forward<TableArnT>(value); }
    template<typename TableArnT = Aws::String>
    InventoryTableConfigurationResult& WithTableArn(TableArnT&& value) { SetTableArn(std::forward<TableArnT>(value)); return *this;}
    ///@}
  private:

    InventoryConfigurationState m_configurationState{InventoryConfigurationState::NOT_SET};
    bool m_configurationStateHasBeenSet = false;

    Aws::String m_tableStatus;
    bool m_tableStatusHasBeenSet = false;

    ErrorDetails m_error;
    bool m_errorHasBeenSet = false;

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet = false;

    Aws::String m_tableArn;
    bool m_tableArnHasBeenSet = false;
  };

} // namespace Model
} // namespace S3
} // namespace Aws
