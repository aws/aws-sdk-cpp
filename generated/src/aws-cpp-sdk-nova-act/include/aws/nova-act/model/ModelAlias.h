/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/nova-act/NovaAct_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace NovaAct {
namespace Model {

/**
 * <p>An alias that provides a stable reference to a model version.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/nova-act-2025-08-22/ModelAlias">AWS
 * API Reference</a></p>
 */
class ModelAlias {
 public:
  AWS_NOVAACT_API ModelAlias() = default;
  AWS_NOVAACT_API ModelAlias(Aws::Utils::Json::JsonView jsonValue);
  AWS_NOVAACT_API ModelAlias& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_NOVAACT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the model alias.</p>
   */
  inline const Aws::String& GetAliasName() const { return m_aliasName; }
  inline bool AliasNameHasBeenSet() const { return m_aliasNameHasBeenSet; }
  template <typename AliasNameT = Aws::String>
  void SetAliasName(AliasNameT&& value) {
    m_aliasNameHasBeenSet = true;
    m_aliasName = std::forward<AliasNameT>(value);
  }
  template <typename AliasNameT = Aws::String>
  ModelAlias& WithAliasName(AliasNameT&& value) {
    SetAliasName(std::forward<AliasNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The model ID that this alias currently points to.</p>
   */
  inline const Aws::String& GetLatestModelId() const { return m_latestModelId; }
  inline bool LatestModelIdHasBeenSet() const { return m_latestModelIdHasBeenSet; }
  template <typename LatestModelIdT = Aws::String>
  void SetLatestModelId(LatestModelIdT&& value) {
    m_latestModelIdHasBeenSet = true;
    m_latestModelId = std::forward<LatestModelIdT>(value);
  }
  template <typename LatestModelIdT = Aws::String>
  ModelAlias& WithLatestModelId(LatestModelIdT&& value) {
    SetLatestModelId(std::forward<LatestModelIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The resolved model ID after alias resolution.</p>
   */
  inline const Aws::String& GetResolvedModelId() const { return m_resolvedModelId; }
  inline bool ResolvedModelIdHasBeenSet() const { return m_resolvedModelIdHasBeenSet; }
  template <typename ResolvedModelIdT = Aws::String>
  void SetResolvedModelId(ResolvedModelIdT&& value) {
    m_resolvedModelIdHasBeenSet = true;
    m_resolvedModelId = std::forward<ResolvedModelIdT>(value);
  }
  template <typename ResolvedModelIdT = Aws::String>
  ModelAlias& WithResolvedModelId(ResolvedModelIdT&& value) {
    SetResolvedModelId(std::forward<ResolvedModelIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_aliasName;

  Aws::String m_latestModelId;

  Aws::String m_resolvedModelId;
  bool m_aliasNameHasBeenSet = false;
  bool m_latestModelIdHasBeenSet = false;
  bool m_resolvedModelIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace NovaAct
}  // namespace Aws
