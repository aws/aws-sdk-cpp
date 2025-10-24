﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/synthetics/Synthetics_EXPORTS.h>
#include <aws/synthetics/model/Dependency.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Synthetics {
namespace Model {

/**
 * <p>This structure contains information about the canary's Lambda handler and
 * where its code is stored by CloudWatch Synthetics.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/synthetics-2017-10-11/CanaryCodeOutput">AWS
 * API Reference</a></p>
 */
class CanaryCodeOutput {
 public:
  AWS_SYNTHETICS_API CanaryCodeOutput() = default;
  AWS_SYNTHETICS_API CanaryCodeOutput(Aws::Utils::Json::JsonView jsonValue);
  AWS_SYNTHETICS_API CanaryCodeOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SYNTHETICS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ARN of the Lambda layer where Synthetics stores the canary script
   * code.</p>
   */
  inline const Aws::String& GetSourceLocationArn() const { return m_sourceLocationArn; }
  inline bool SourceLocationArnHasBeenSet() const { return m_sourceLocationArnHasBeenSet; }
  template <typename SourceLocationArnT = Aws::String>
  void SetSourceLocationArn(SourceLocationArnT&& value) {
    m_sourceLocationArnHasBeenSet = true;
    m_sourceLocationArn = std::forward<SourceLocationArnT>(value);
  }
  template <typename SourceLocationArnT = Aws::String>
  CanaryCodeOutput& WithSourceLocationArn(SourceLocationArnT&& value) {
    SetSourceLocationArn(std::forward<SourceLocationArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The entry point to use for the source code when running the canary.</p>
   * <p>This field is required when you don't specify <code>BlueprintTypes</code> and
   * is not allowed when you specify <code>BlueprintTypes</code>.</p>
   */
  inline const Aws::String& GetHandler() const { return m_handler; }
  inline bool HandlerHasBeenSet() const { return m_handlerHasBeenSet; }
  template <typename HandlerT = Aws::String>
  void SetHandler(HandlerT&& value) {
    m_handlerHasBeenSet = true;
    m_handler = std::forward<HandlerT>(value);
  }
  template <typename HandlerT = Aws::String>
  CanaryCodeOutput& WithHandler(HandlerT&& value) {
    SetHandler(std::forward<HandlerT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> <code>BlueprintTypes</code> is a list of templates that enable simplified
   * canary creation. You can create canaries for common monitoring scenarios by
   * providing only a JSON configuration file instead of writing custom scripts. The
   * only supported value is <code>multi-checks</code>.</p> <p>Multi-checks monitors
   * HTTP/DNS/SSL/TCP endpoints with built-in authentication schemes (Basic, API Key,
   * OAuth, SigV4) and assertion capabilities. When you specify
   * <code>BlueprintTypes</code>, the Handler field cannot be specified since the
   * blueprint provides a pre-defined entry point.</p> <p>
   * <code>BlueprintTypes</code> is supported only on canaries for syn-nodejs-3.0
   * runtime or later.</p>
   */
  inline const Aws::Vector<Aws::String>& GetBlueprintTypes() const { return m_blueprintTypes; }
  inline bool BlueprintTypesHasBeenSet() const { return m_blueprintTypesHasBeenSet; }
  template <typename BlueprintTypesT = Aws::Vector<Aws::String>>
  void SetBlueprintTypes(BlueprintTypesT&& value) {
    m_blueprintTypesHasBeenSet = true;
    m_blueprintTypes = std::forward<BlueprintTypesT>(value);
  }
  template <typename BlueprintTypesT = Aws::Vector<Aws::String>>
  CanaryCodeOutput& WithBlueprintTypes(BlueprintTypesT&& value) {
    SetBlueprintTypes(std::forward<BlueprintTypesT>(value));
    return *this;
  }
  template <typename BlueprintTypesT = Aws::String>
  CanaryCodeOutput& AddBlueprintTypes(BlueprintTypesT&& value) {
    m_blueprintTypesHasBeenSet = true;
    m_blueprintTypes.emplace_back(std::forward<BlueprintTypesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of dependencies that are used for running this canary. The
   * dependencies are specified as a key-value pair, where the key is the type of
   * dependency and the value is the dependency reference.</p>
   */
  inline const Aws::Vector<Dependency>& GetDependencies() const { return m_dependencies; }
  inline bool DependenciesHasBeenSet() const { return m_dependenciesHasBeenSet; }
  template <typename DependenciesT = Aws::Vector<Dependency>>
  void SetDependencies(DependenciesT&& value) {
    m_dependenciesHasBeenSet = true;
    m_dependencies = std::forward<DependenciesT>(value);
  }
  template <typename DependenciesT = Aws::Vector<Dependency>>
  CanaryCodeOutput& WithDependencies(DependenciesT&& value) {
    SetDependencies(std::forward<DependenciesT>(value));
    return *this;
  }
  template <typename DependenciesT = Dependency>
  CanaryCodeOutput& AddDependencies(DependenciesT&& value) {
    m_dependenciesHasBeenSet = true;
    m_dependencies.emplace_back(std::forward<DependenciesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_sourceLocationArn;
  bool m_sourceLocationArnHasBeenSet = false;

  Aws::String m_handler;
  bool m_handlerHasBeenSet = false;

  Aws::Vector<Aws::String> m_blueprintTypes;
  bool m_blueprintTypesHasBeenSet = false;

  Aws::Vector<Dependency> m_dependencies;
  bool m_dependenciesHasBeenSet = false;
};

}  // namespace Model
}  // namespace Synthetics
}  // namespace Aws
