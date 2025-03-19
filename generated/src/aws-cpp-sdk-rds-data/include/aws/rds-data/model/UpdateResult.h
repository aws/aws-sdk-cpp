/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds-data/RDSDataService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds-data/model/Field.h>
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
namespace RDSDataService
{
namespace Model
{

  /**
   * <p>The response elements represent the results of an update.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-data-2018-08-01/UpdateResult">AWS
   * API Reference</a></p>
   */
  class UpdateResult
  {
  public:
    AWS_RDSDATASERVICE_API UpdateResult() = default;
    AWS_RDSDATASERVICE_API UpdateResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_RDSDATASERVICE_API UpdateResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RDSDATASERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Values for fields generated during the request.</p>
     */
    inline const Aws::Vector<Field>& GetGeneratedFields() const { return m_generatedFields; }
    inline bool GeneratedFieldsHasBeenSet() const { return m_generatedFieldsHasBeenSet; }
    template<typename GeneratedFieldsT = Aws::Vector<Field>>
    void SetGeneratedFields(GeneratedFieldsT&& value) { m_generatedFieldsHasBeenSet = true; m_generatedFields = std::forward<GeneratedFieldsT>(value); }
    template<typename GeneratedFieldsT = Aws::Vector<Field>>
    UpdateResult& WithGeneratedFields(GeneratedFieldsT&& value) { SetGeneratedFields(std::forward<GeneratedFieldsT>(value)); return *this;}
    template<typename GeneratedFieldsT = Field>
    UpdateResult& AddGeneratedFields(GeneratedFieldsT&& value) { m_generatedFieldsHasBeenSet = true; m_generatedFields.emplace_back(std::forward<GeneratedFieldsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Field> m_generatedFields;
    bool m_generatedFieldsHasBeenSet = false;
  };

} // namespace Model
} // namespace RDSDataService
} // namespace Aws
