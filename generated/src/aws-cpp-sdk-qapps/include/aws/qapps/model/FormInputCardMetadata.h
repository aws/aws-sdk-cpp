/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qapps/QApps_EXPORTS.h>
#include <aws/core/utils/Document.h>
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
namespace QApps
{
namespace Model
{

  /**
   * <p>The metadata of the form input card.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qapps-2023-11-27/FormInputCardMetadata">AWS
   * API Reference</a></p>
   */
  class FormInputCardMetadata
  {
  public:
    AWS_QAPPS_API FormInputCardMetadata() = default;
    AWS_QAPPS_API FormInputCardMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_QAPPS_API FormInputCardMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QAPPS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The JSON schema that defines the shape of the response data.</p>
     */
    inline Aws::Utils::DocumentView GetSchema() const { return m_schema; }
    inline bool SchemaHasBeenSet() const { return m_schemaHasBeenSet; }
    template<typename SchemaT = Aws::Utils::Document>
    void SetSchema(SchemaT&& value) { m_schemaHasBeenSet = true; m_schema = std::forward<SchemaT>(value); }
    template<typename SchemaT = Aws::Utils::Document>
    FormInputCardMetadata& WithSchema(SchemaT&& value) { SetSchema(std::forward<SchemaT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::Document m_schema;
    bool m_schemaHasBeenSet = false;
  };

} // namespace Model
} // namespace QApps
} // namespace Aws
