/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-influxdb/TimestreamInfluxDB_EXPORTS.h>
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
namespace TimestreamInfluxDB
{
namespace Model
{

  /**
   * <p>Contains a summary of a DB parameter group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-influxdb-2023-01-27/DbParameterGroupSummary">AWS
   * API Reference</a></p>
   */
  class DbParameterGroupSummary
  {
  public:
    AWS_TIMESTREAMINFLUXDB_API DbParameterGroupSummary();
    AWS_TIMESTREAMINFLUXDB_API DbParameterGroupSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMINFLUXDB_API DbParameterGroupSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMINFLUXDB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A service-generated unique identifier.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>A service-generated unique identifier.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>A service-generated unique identifier.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>A service-generated unique identifier.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>A service-generated unique identifier.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>A service-generated unique identifier.</p>
     */
    inline DbParameterGroupSummary& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>A service-generated unique identifier.</p>
     */
    inline DbParameterGroupSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>A service-generated unique identifier.</p>
     */
    inline DbParameterGroupSummary& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>This customer-supplied name uniquely identifies the parameter group.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>This customer-supplied name uniquely identifies the parameter group.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>This customer-supplied name uniquely identifies the parameter group.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>This customer-supplied name uniquely identifies the parameter group.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>This customer-supplied name uniquely identifies the parameter group.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>This customer-supplied name uniquely identifies the parameter group.</p>
     */
    inline DbParameterGroupSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>This customer-supplied name uniquely identifies the parameter group.</p>
     */
    inline DbParameterGroupSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>This customer-supplied name uniquely identifies the parameter group.</p>
     */
    inline DbParameterGroupSummary& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the DB parameter group.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the DB parameter group.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the DB parameter group.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the DB parameter group.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the DB parameter group.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the DB parameter group.</p>
     */
    inline DbParameterGroupSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the DB parameter group.</p>
     */
    inline DbParameterGroupSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the DB parameter group.</p>
     */
    inline DbParameterGroupSummary& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>A description of the DB parameter group.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the DB parameter group.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the DB parameter group.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the DB parameter group.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the DB parameter group.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the DB parameter group.</p>
     */
    inline DbParameterGroupSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the DB parameter group.</p>
     */
    inline DbParameterGroupSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the DB parameter group.</p>
     */
    inline DbParameterGroupSummary& WithDescription(const char* value) { SetDescription(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace TimestreamInfluxDB
} // namespace Aws
