/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-write/TimestreamWrite_EXPORTS.h>
#include <aws/timestream-write/model/PartitionKeyType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/timestream-write/model/PartitionKeyEnforcementLevel.h>
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
namespace TimestreamWrite
{
namespace Model
{

  /**
   * <p> An attribute used in partitioning data in a table. A dimension key
   * partitions data using the values of the dimension specified by the
   * dimension-name as partition key, while a measure key partitions data using
   * measure names (values of the 'measure_name' column). </p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-write-2018-11-01/PartitionKey">AWS
   * API Reference</a></p>
   */
  class PartitionKey
  {
  public:
    AWS_TIMESTREAMWRITE_API PartitionKey();
    AWS_TIMESTREAMWRITE_API PartitionKey(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMWRITE_API PartitionKey& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMWRITE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The type of the partition key. Options are DIMENSION (dimension key) and
     * MEASURE (measure key). </p>
     */
    inline const PartitionKeyType& GetType() const{ return m_type; }

    /**
     * <p> The type of the partition key. Options are DIMENSION (dimension key) and
     * MEASURE (measure key). </p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p> The type of the partition key. Options are DIMENSION (dimension key) and
     * MEASURE (measure key). </p>
     */
    inline void SetType(const PartitionKeyType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p> The type of the partition key. Options are DIMENSION (dimension key) and
     * MEASURE (measure key). </p>
     */
    inline void SetType(PartitionKeyType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p> The type of the partition key. Options are DIMENSION (dimension key) and
     * MEASURE (measure key). </p>
     */
    inline PartitionKey& WithType(const PartitionKeyType& value) { SetType(value); return *this;}

    /**
     * <p> The type of the partition key. Options are DIMENSION (dimension key) and
     * MEASURE (measure key). </p>
     */
    inline PartitionKey& WithType(PartitionKeyType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p> The name of the attribute used for a dimension key. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p> The name of the attribute used for a dimension key. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p> The name of the attribute used for a dimension key. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p> The name of the attribute used for a dimension key. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p> The name of the attribute used for a dimension key. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p> The name of the attribute used for a dimension key. </p>
     */
    inline PartitionKey& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p> The name of the attribute used for a dimension key. </p>
     */
    inline PartitionKey& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p> The name of the attribute used for a dimension key. </p>
     */
    inline PartitionKey& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p> The level of enforcement for the specification of a dimension key in
     * ingested records. Options are REQUIRED (dimension key must be specified) and
     * OPTIONAL (dimension key does not have to be specified). </p>
     */
    inline const PartitionKeyEnforcementLevel& GetEnforcementInRecord() const{ return m_enforcementInRecord; }

    /**
     * <p> The level of enforcement for the specification of a dimension key in
     * ingested records. Options are REQUIRED (dimension key must be specified) and
     * OPTIONAL (dimension key does not have to be specified). </p>
     */
    inline bool EnforcementInRecordHasBeenSet() const { return m_enforcementInRecordHasBeenSet; }

    /**
     * <p> The level of enforcement for the specification of a dimension key in
     * ingested records. Options are REQUIRED (dimension key must be specified) and
     * OPTIONAL (dimension key does not have to be specified). </p>
     */
    inline void SetEnforcementInRecord(const PartitionKeyEnforcementLevel& value) { m_enforcementInRecordHasBeenSet = true; m_enforcementInRecord = value; }

    /**
     * <p> The level of enforcement for the specification of a dimension key in
     * ingested records. Options are REQUIRED (dimension key must be specified) and
     * OPTIONAL (dimension key does not have to be specified). </p>
     */
    inline void SetEnforcementInRecord(PartitionKeyEnforcementLevel&& value) { m_enforcementInRecordHasBeenSet = true; m_enforcementInRecord = std::move(value); }

    /**
     * <p> The level of enforcement for the specification of a dimension key in
     * ingested records. Options are REQUIRED (dimension key must be specified) and
     * OPTIONAL (dimension key does not have to be specified). </p>
     */
    inline PartitionKey& WithEnforcementInRecord(const PartitionKeyEnforcementLevel& value) { SetEnforcementInRecord(value); return *this;}

    /**
     * <p> The level of enforcement for the specification of a dimension key in
     * ingested records. Options are REQUIRED (dimension key must be specified) and
     * OPTIONAL (dimension key does not have to be specified). </p>
     */
    inline PartitionKey& WithEnforcementInRecord(PartitionKeyEnforcementLevel&& value) { SetEnforcementInRecord(std::move(value)); return *this;}

  private:

    PartitionKeyType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    PartitionKeyEnforcementLevel m_enforcementInRecord;
    bool m_enforcementInRecordHasBeenSet = false;
  };

} // namespace Model
} // namespace TimestreamWrite
} // namespace Aws
