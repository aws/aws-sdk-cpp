/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptune/Neptune_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/neptune/model/ValidStorageOptions.h>
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
namespace Neptune
{
namespace Model
{

  /**
   * <p>Information about valid modifications that you can make to your DB instance.
   * Contains the result of a successful call to the
   * <a>DescribeValidDBInstanceModifications</a> action. You can use this information
   * when you call <a>ModifyDBInstance</a>. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/neptune-2014-10-31/ValidDBInstanceModificationsMessage">AWS
   * API Reference</a></p>
   */
  class ValidDBInstanceModificationsMessage
  {
  public:
    AWS_NEPTUNE_API ValidDBInstanceModificationsMessage() = default;
    AWS_NEPTUNE_API ValidDBInstanceModificationsMessage(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_NEPTUNE_API ValidDBInstanceModificationsMessage& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_NEPTUNE_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_NEPTUNE_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>Valid storage options for your DB instance.</p>
     */
    inline const Aws::Vector<ValidStorageOptions>& GetStorage() const { return m_storage; }
    inline bool StorageHasBeenSet() const { return m_storageHasBeenSet; }
    template<typename StorageT = Aws::Vector<ValidStorageOptions>>
    void SetStorage(StorageT&& value) { m_storageHasBeenSet = true; m_storage = std::forward<StorageT>(value); }
    template<typename StorageT = Aws::Vector<ValidStorageOptions>>
    ValidDBInstanceModificationsMessage& WithStorage(StorageT&& value) { SetStorage(std::forward<StorageT>(value)); return *this;}
    template<typename StorageT = ValidStorageOptions>
    ValidDBInstanceModificationsMessage& AddStorage(StorageT&& value) { m_storageHasBeenSet = true; m_storage.emplace_back(std::forward<StorageT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<ValidStorageOptions> m_storage;
    bool m_storageHasBeenSet = false;
  };

} // namespace Model
} // namespace Neptune
} // namespace Aws
