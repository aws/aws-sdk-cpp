/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ram/RAM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace RAM
{
namespace Model
{

  /**
   * <p>Describes a principal for use with Resource Access Manager.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ram-2018-01-04/Principal">AWS API
   * Reference</a></p>
   */
  class Principal
  {
  public:
    AWS_RAM_API Principal() = default;
    AWS_RAM_API Principal(Aws::Utils::Json::JsonView jsonValue);
    AWS_RAM_API Principal& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_RAM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the principal that can be associated with a resource share.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    Principal& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Amazon
     * Resource Name (ARN)</a> of a resource share the principal is associated
     * with.</p>
     */
    inline const Aws::String& GetResourceShareArn() const { return m_resourceShareArn; }
    inline bool ResourceShareArnHasBeenSet() const { return m_resourceShareArnHasBeenSet; }
    template<typename ResourceShareArnT = Aws::String>
    void SetResourceShareArn(ResourceShareArnT&& value) { m_resourceShareArnHasBeenSet = true; m_resourceShareArn = std::forward<ResourceShareArnT>(value); }
    template<typename ResourceShareArnT = Aws::String>
    Principal& WithResourceShareArn(ResourceShareArnT&& value) { SetResourceShareArn(std::forward<ResourceShareArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the principal was associated with the resource
     * share.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    Principal& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the association between the resource share and the
     * principal was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const { return m_lastUpdatedTime; }
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    void SetLastUpdatedTime(LastUpdatedTimeT&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::forward<LastUpdatedTimeT>(value); }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    Principal& WithLastUpdatedTime(LastUpdatedTimeT&& value) { SetLastUpdatedTime(std::forward<LastUpdatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the relationship between the Amazon Web Services account the
     * principal belongs to and the account that owns the resource share:</p> <ul> <li>
     * <p> <code>True</code> – The two accounts belong to same organization.</p> </li>
     * <li> <p> <code>False</code> – The two accounts do not belong to the same
     * organization.</p> </li> </ul>
     */
    inline bool GetExternal() const { return m_external; }
    inline bool ExternalHasBeenSet() const { return m_externalHasBeenSet; }
    inline void SetExternal(bool value) { m_externalHasBeenSet = true; m_external = value; }
    inline Principal& WithExternal(bool value) { SetExternal(value); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_resourceShareArn;
    bool m_resourceShareArnHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTime{};
    bool m_lastUpdatedTimeHasBeenSet = false;

    bool m_external{false};
    bool m_externalHasBeenSet = false;
  };

} // namespace Model
} // namespace RAM
} // namespace Aws
