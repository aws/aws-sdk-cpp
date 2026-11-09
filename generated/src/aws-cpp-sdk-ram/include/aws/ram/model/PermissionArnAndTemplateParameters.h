/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ram/RAM_EXPORTS.h>
#include <aws/ram/model/PermissionTemplateParameterInput.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace RAM {
namespace Model {

/**
 * <p>Contains a permission ARN and its associated template parameter values. The
 * <a>CreateResourceShare</a> operation uses this structure when associating
 * permissions that have template parameters.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/PermissionArnAndTemplateParameters">AWS
 * API Reference</a></p>
 */
class PermissionArnAndTemplateParameters {
 public:
  AWS_RAM_API PermissionArnAndTemplateParameters() = default;
  AWS_RAM_API PermissionArnAndTemplateParameters(Aws::Utils::Json::JsonView jsonValue);
  AWS_RAM_API PermissionArnAndTemplateParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RAM_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The <a
   * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
   * Resource Name (ARN)</a> of the permission to associate with the resource
   * share.</p>
   */
  inline const Aws::String& GetPermissionArn() const { return m_permissionArn; }
  inline bool PermissionArnHasBeenSet() const { return m_permissionArnHasBeenSet; }
  template <typename PermissionArnT = Aws::String>
  void SetPermissionArn(PermissionArnT&& value) {
    m_permissionArnHasBeenSet = true;
    m_permissionArn = std::forward<PermissionArnT>(value);
  }
  template <typename PermissionArnT = Aws::String>
  PermissionArnAndTemplateParameters& WithPermissionArn(PermissionArnT&& value) {
    SetPermissionArn(std::forward<PermissionArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of template parameter values to assign for this permission. You must
   * provide values for all parameters declared in the permission template.</p>
   */
  inline const Aws::Vector<PermissionTemplateParameterInput>& GetPermissionTemplateParameters() const {
    return m_permissionTemplateParameters;
  }
  inline bool PermissionTemplateParametersHasBeenSet() const { return m_permissionTemplateParametersHasBeenSet; }
  template <typename PermissionTemplateParametersT = Aws::Vector<PermissionTemplateParameterInput>>
  void SetPermissionTemplateParameters(PermissionTemplateParametersT&& value) {
    m_permissionTemplateParametersHasBeenSet = true;
    m_permissionTemplateParameters = std::forward<PermissionTemplateParametersT>(value);
  }
  template <typename PermissionTemplateParametersT = Aws::Vector<PermissionTemplateParameterInput>>
  PermissionArnAndTemplateParameters& WithPermissionTemplateParameters(PermissionTemplateParametersT&& value) {
    SetPermissionTemplateParameters(std::forward<PermissionTemplateParametersT>(value));
    return *this;
  }
  template <typename PermissionTemplateParametersT = PermissionTemplateParameterInput>
  PermissionArnAndTemplateParameters& AddPermissionTemplateParameters(PermissionTemplateParametersT&& value) {
    m_permissionTemplateParametersHasBeenSet = true;
    m_permissionTemplateParameters.emplace_back(std::forward<PermissionTemplateParametersT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_permissionArn;

  Aws::Vector<PermissionTemplateParameterInput> m_permissionTemplateParameters;
  bool m_permissionArnHasBeenSet = false;
  bool m_permissionTemplateParametersHasBeenSet = false;
};

}  // namespace Model
}  // namespace RAM
}  // namespace Aws
