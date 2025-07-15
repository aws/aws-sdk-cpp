/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3/S3_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3/model/ErrorDetails.h>
#include <aws/s3/model/RecordExpiration.h>
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
   * <p> The journal table configuration for the S3 Metadata configuration.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/JournalTableConfigurationResult">AWS
   * API Reference</a></p>
   */
  class JournalTableConfigurationResult
  {
  public:
    AWS_S3_API JournalTableConfigurationResult() = default;
    AWS_S3_API JournalTableConfigurationResult(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_S3_API JournalTableConfigurationResult& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_S3_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p> The status of the journal table. The status values are: </p> <ul> <li> <p>
     * <code>CREATING</code> - The journal table is in the process of being created in
     * the specified table bucket.</p> </li> <li> <p> <code>ACTIVE</code> - The journal
     * table has been created successfully, and records are being delivered to the
     * table. </p> </li> <li> <p> <code>FAILED</code> - Amazon S3 is unable to create
     * the journal table, or Amazon S3 is unable to deliver records.</p> </li> </ul>
     */
    inline const Aws::String& GetTableStatus() const { return m_tableStatus; }
    inline bool TableStatusHasBeenSet() const { return m_tableStatusHasBeenSet; }
    template<typename TableStatusT = Aws::String>
    void SetTableStatus(TableStatusT&& value) { m_tableStatusHasBeenSet = true; m_tableStatus = std::forward<TableStatusT>(value); }
    template<typename TableStatusT = Aws::String>
    JournalTableConfigurationResult& WithTableStatus(TableStatusT&& value) { SetTableStatus(std::forward<TableStatusT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ErrorDetails& GetError() const { return m_error; }
    inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }
    template<typename ErrorT = ErrorDetails>
    void SetError(ErrorT&& value) { m_errorHasBeenSet = true; m_error = std::forward<ErrorT>(value); }
    template<typename ErrorT = ErrorDetails>
    JournalTableConfigurationResult& WithError(ErrorT&& value) { SetError(std::forward<ErrorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the journal table. </p>
     */
    inline const Aws::String& GetTableName() const { return m_tableName; }
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }
    template<typename TableNameT = Aws::String>
    void SetTableName(TableNameT&& value) { m_tableNameHasBeenSet = true; m_tableName = std::forward<TableNameT>(value); }
    template<typename TableNameT = Aws::String>
    JournalTableConfigurationResult& WithTableName(TableNameT&& value) { SetTableName(std::forward<TableNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) for the journal table. </p>
     */
    inline const Aws::String& GetTableArn() const { return m_tableArn; }
    inline bool TableArnHasBeenSet() const { return m_tableArnHasBeenSet; }
    template<typename TableArnT = Aws::String>
    void SetTableArn(TableArnT&& value) { m_tableArnHasBeenSet = true; m_tableArn = std::forward<TableArnT>(value); }
    template<typename TableArnT = Aws::String>
    JournalTableConfigurationResult& WithTableArn(TableArnT&& value) { SetTableArn(std::forward<TableArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The journal table record expiration settings for the journal table. </p>
     */
    inline const RecordExpiration& GetRecordExpiration() const { return m_recordExpiration; }
    inline bool RecordExpirationHasBeenSet() const { return m_recordExpirationHasBeenSet; }
    template<typename RecordExpirationT = RecordExpiration>
    void SetRecordExpiration(RecordExpirationT&& value) { m_recordExpirationHasBeenSet = true; m_recordExpiration = std::forward<RecordExpirationT>(value); }
    template<typename RecordExpirationT = RecordExpiration>
    JournalTableConfigurationResult& WithRecordExpiration(RecordExpirationT&& value) { SetRecordExpiration(std::forward<RecordExpirationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_tableStatus;
    bool m_tableStatusHasBeenSet = false;

    ErrorDetails m_error;
    bool m_errorHasBeenSet = false;

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet = false;

    Aws::String m_tableArn;
    bool m_tableArnHasBeenSet = false;

    RecordExpiration m_recordExpiration;
    bool m_recordExpirationHasBeenSet = false;
  };

} // namespace Model
} // namespace S3
} // namespace Aws
