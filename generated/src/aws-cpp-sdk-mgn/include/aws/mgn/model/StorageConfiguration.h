/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/mgn/model/FsxOntapConfiguration.h>
#include <aws/mgn/model/StorageType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace mgn {
namespace Model {

/**
 * <p>Storage configuration for replication.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/StorageConfiguration">AWS
 * API Reference</a></p>
 */
class StorageConfiguration {
 public:
  AWS_MGN_API StorageConfiguration() = default;
  AWS_MGN_API StorageConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_MGN_API StorageConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Storage configuration storage type.</p>
   */
  inline StorageType GetStorageType() const { return m_storageType; }
  inline bool StorageTypeHasBeenSet() const { return m_storageTypeHasBeenSet; }
  inline void SetStorageType(StorageType value) {
    m_storageTypeHasBeenSet = true;
    m_storageType = value;
  }
  inline StorageConfiguration& WithStorageType(StorageType value) {
    SetStorageType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Storage configuration FSx ONTAP configuration.</p>
   */
  inline const FsxOntapConfiguration& GetFsxOntapConfiguration() const { return m_fsxOntapConfiguration; }
  inline bool FsxOntapConfigurationHasBeenSet() const { return m_fsxOntapConfigurationHasBeenSet; }
  template <typename FsxOntapConfigurationT = FsxOntapConfiguration>
  void SetFsxOntapConfiguration(FsxOntapConfigurationT&& value) {
    m_fsxOntapConfigurationHasBeenSet = true;
    m_fsxOntapConfiguration = std::forward<FsxOntapConfigurationT>(value);
  }
  template <typename FsxOntapConfigurationT = FsxOntapConfiguration>
  StorageConfiguration& WithFsxOntapConfiguration(FsxOntapConfigurationT&& value) {
    SetFsxOntapConfiguration(std::forward<FsxOntapConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  StorageType m_storageType{StorageType::NOT_SET};

  FsxOntapConfiguration m_fsxOntapConfiguration;
  bool m_storageTypeHasBeenSet = false;
  bool m_fsxOntapConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace mgn
}  // namespace Aws
