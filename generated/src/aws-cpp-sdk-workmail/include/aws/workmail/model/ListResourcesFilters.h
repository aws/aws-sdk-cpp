/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workmail/WorkMail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workmail/model/EntityState.h>
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
namespace WorkMail
{
namespace Model
{

  /**
   * <p>Filtering options for <i>ListResources</i> operation. This is only used as
   * input to Operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/ListResourcesFilters">AWS
   * API Reference</a></p>
   */
  class ListResourcesFilters
  {
  public:
    AWS_WORKMAIL_API ListResourcesFilters();
    AWS_WORKMAIL_API ListResourcesFilters(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKMAIL_API ListResourcesFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKMAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Filters only resource that start with the entered name prefix .</p>
     */
    inline const Aws::String& GetNamePrefix() const{ return m_namePrefix; }

    /**
     * <p>Filters only resource that start with the entered name prefix .</p>
     */
    inline bool NamePrefixHasBeenSet() const { return m_namePrefixHasBeenSet; }

    /**
     * <p>Filters only resource that start with the entered name prefix .</p>
     */
    inline void SetNamePrefix(const Aws::String& value) { m_namePrefixHasBeenSet = true; m_namePrefix = value; }

    /**
     * <p>Filters only resource that start with the entered name prefix .</p>
     */
    inline void SetNamePrefix(Aws::String&& value) { m_namePrefixHasBeenSet = true; m_namePrefix = std::move(value); }

    /**
     * <p>Filters only resource that start with the entered name prefix .</p>
     */
    inline void SetNamePrefix(const char* value) { m_namePrefixHasBeenSet = true; m_namePrefix.assign(value); }

    /**
     * <p>Filters only resource that start with the entered name prefix .</p>
     */
    inline ListResourcesFilters& WithNamePrefix(const Aws::String& value) { SetNamePrefix(value); return *this;}

    /**
     * <p>Filters only resource that start with the entered name prefix .</p>
     */
    inline ListResourcesFilters& WithNamePrefix(Aws::String&& value) { SetNamePrefix(std::move(value)); return *this;}

    /**
     * <p>Filters only resource that start with the entered name prefix .</p>
     */
    inline ListResourcesFilters& WithNamePrefix(const char* value) { SetNamePrefix(value); return *this;}


    /**
     * <p>Filters only resource with the provided primary email prefix.</p>
     */
    inline const Aws::String& GetPrimaryEmailPrefix() const{ return m_primaryEmailPrefix; }

    /**
     * <p>Filters only resource with the provided primary email prefix.</p>
     */
    inline bool PrimaryEmailPrefixHasBeenSet() const { return m_primaryEmailPrefixHasBeenSet; }

    /**
     * <p>Filters only resource with the provided primary email prefix.</p>
     */
    inline void SetPrimaryEmailPrefix(const Aws::String& value) { m_primaryEmailPrefixHasBeenSet = true; m_primaryEmailPrefix = value; }

    /**
     * <p>Filters only resource with the provided primary email prefix.</p>
     */
    inline void SetPrimaryEmailPrefix(Aws::String&& value) { m_primaryEmailPrefixHasBeenSet = true; m_primaryEmailPrefix = std::move(value); }

    /**
     * <p>Filters only resource with the provided primary email prefix.</p>
     */
    inline void SetPrimaryEmailPrefix(const char* value) { m_primaryEmailPrefixHasBeenSet = true; m_primaryEmailPrefix.assign(value); }

    /**
     * <p>Filters only resource with the provided primary email prefix.</p>
     */
    inline ListResourcesFilters& WithPrimaryEmailPrefix(const Aws::String& value) { SetPrimaryEmailPrefix(value); return *this;}

    /**
     * <p>Filters only resource with the provided primary email prefix.</p>
     */
    inline ListResourcesFilters& WithPrimaryEmailPrefix(Aws::String&& value) { SetPrimaryEmailPrefix(std::move(value)); return *this;}

    /**
     * <p>Filters only resource with the provided primary email prefix.</p>
     */
    inline ListResourcesFilters& WithPrimaryEmailPrefix(const char* value) { SetPrimaryEmailPrefix(value); return *this;}


    /**
     * <p>Filters only resource with the provided state.</p>
     */
    inline const EntityState& GetState() const{ return m_state; }

    /**
     * <p>Filters only resource with the provided state.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>Filters only resource with the provided state.</p>
     */
    inline void SetState(const EntityState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>Filters only resource with the provided state.</p>
     */
    inline void SetState(EntityState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>Filters only resource with the provided state.</p>
     */
    inline ListResourcesFilters& WithState(const EntityState& value) { SetState(value); return *this;}

    /**
     * <p>Filters only resource with the provided state.</p>
     */
    inline ListResourcesFilters& WithState(EntityState&& value) { SetState(std::move(value)); return *this;}

  private:

    Aws::String m_namePrefix;
    bool m_namePrefixHasBeenSet = false;

    Aws::String m_primaryEmailPrefix;
    bool m_primaryEmailPrefixHasBeenSet = false;

    EntityState m_state;
    bool m_stateHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
