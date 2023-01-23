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
    AWS_NEPTUNE_API ValidDBInstanceModificationsMessage();
    AWS_NEPTUNE_API ValidDBInstanceModificationsMessage(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_NEPTUNE_API ValidDBInstanceModificationsMessage& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_NEPTUNE_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_NEPTUNE_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>Valid storage options for your DB instance.</p>
     */
    inline const Aws::Vector<ValidStorageOptions>& GetStorage() const{ return m_storage; }

    /**
     * <p>Valid storage options for your DB instance.</p>
     */
    inline bool StorageHasBeenSet() const { return m_storageHasBeenSet; }

    /**
     * <p>Valid storage options for your DB instance.</p>
     */
    inline void SetStorage(const Aws::Vector<ValidStorageOptions>& value) { m_storageHasBeenSet = true; m_storage = value; }

    /**
     * <p>Valid storage options for your DB instance.</p>
     */
    inline void SetStorage(Aws::Vector<ValidStorageOptions>&& value) { m_storageHasBeenSet = true; m_storage = std::move(value); }

    /**
     * <p>Valid storage options for your DB instance.</p>
     */
    inline ValidDBInstanceModificationsMessage& WithStorage(const Aws::Vector<ValidStorageOptions>& value) { SetStorage(value); return *this;}

    /**
     * <p>Valid storage options for your DB instance.</p>
     */
    inline ValidDBInstanceModificationsMessage& WithStorage(Aws::Vector<ValidStorageOptions>&& value) { SetStorage(std::move(value)); return *this;}

    /**
     * <p>Valid storage options for your DB instance.</p>
     */
    inline ValidDBInstanceModificationsMessage& AddStorage(const ValidStorageOptions& value) { m_storageHasBeenSet = true; m_storage.push_back(value); return *this; }

    /**
     * <p>Valid storage options for your DB instance.</p>
     */
    inline ValidDBInstanceModificationsMessage& AddStorage(ValidStorageOptions&& value) { m_storageHasBeenSet = true; m_storage.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<ValidStorageOptions> m_storage;
    bool m_storageHasBeenSet = false;
  };

} // namespace Model
} // namespace Neptune
} // namespace Aws
