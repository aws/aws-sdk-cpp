/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/sagemaker/model/MIGProfileType.h>

using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {
namespace MIGProfileTypeMapper {

static const int mig_1g_5gb_HASH = HashingUtils::HashString("mig-1g.5gb");
static const int mig_1g_10gb_HASH = HashingUtils::HashString("mig-1g.10gb");
static const int mig_1g_18gb_HASH = HashingUtils::HashString("mig-1g.18gb");
static const int mig_1g_20gb_HASH = HashingUtils::HashString("mig-1g.20gb");
static const int mig_1g_23gb_HASH = HashingUtils::HashString("mig-1g.23gb");
static const int mig_1g_35gb_HASH = HashingUtils::HashString("mig-1g.35gb");
static const int mig_1g_45gb_HASH = HashingUtils::HashString("mig-1g.45gb");
static const int mig_1g_47gb_HASH = HashingUtils::HashString("mig-1g.47gb");
static const int mig_2g_10gb_HASH = HashingUtils::HashString("mig-2g.10gb");
static const int mig_2g_20gb_HASH = HashingUtils::HashString("mig-2g.20gb");
static const int mig_2g_35gb_HASH = HashingUtils::HashString("mig-2g.35gb");
static const int mig_2g_45gb_HASH = HashingUtils::HashString("mig-2g.45gb");
static const int mig_2g_47gb_HASH = HashingUtils::HashString("mig-2g.47gb");
static const int mig_3g_20gb_HASH = HashingUtils::HashString("mig-3g.20gb");
static const int mig_3g_40gb_HASH = HashingUtils::HashString("mig-3g.40gb");
static const int mig_3g_71gb_HASH = HashingUtils::HashString("mig-3g.71gb");
static const int mig_3g_90gb_HASH = HashingUtils::HashString("mig-3g.90gb");
static const int mig_3g_93gb_HASH = HashingUtils::HashString("mig-3g.93gb");
static const int mig_4g_20gb_HASH = HashingUtils::HashString("mig-4g.20gb");
static const int mig_4g_40gb_HASH = HashingUtils::HashString("mig-4g.40gb");
static const int mig_4g_71gb_HASH = HashingUtils::HashString("mig-4g.71gb");
static const int mig_4g_90gb_HASH = HashingUtils::HashString("mig-4g.90gb");
static const int mig_4g_93gb_HASH = HashingUtils::HashString("mig-4g.93gb");
static const int mig_7g_40gb_HASH = HashingUtils::HashString("mig-7g.40gb");
static const int mig_7g_80gb_HASH = HashingUtils::HashString("mig-7g.80gb");
static const int mig_7g_141gb_HASH = HashingUtils::HashString("mig-7g.141gb");
static const int mig_7g_180gb_HASH = HashingUtils::HashString("mig-7g.180gb");
static const int mig_7g_186gb_HASH = HashingUtils::HashString("mig-7g.186gb");

MIGProfileType GetMIGProfileTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == mig_1g_5gb_HASH) {
    return MIGProfileType::mig_1g_5gb;
  } else if (hashCode == mig_1g_10gb_HASH) {
    return MIGProfileType::mig_1g_10gb;
  } else if (hashCode == mig_1g_18gb_HASH) {
    return MIGProfileType::mig_1g_18gb;
  } else if (hashCode == mig_1g_20gb_HASH) {
    return MIGProfileType::mig_1g_20gb;
  } else if (hashCode == mig_1g_23gb_HASH) {
    return MIGProfileType::mig_1g_23gb;
  } else if (hashCode == mig_1g_35gb_HASH) {
    return MIGProfileType::mig_1g_35gb;
  } else if (hashCode == mig_1g_45gb_HASH) {
    return MIGProfileType::mig_1g_45gb;
  } else if (hashCode == mig_1g_47gb_HASH) {
    return MIGProfileType::mig_1g_47gb;
  } else if (hashCode == mig_2g_10gb_HASH) {
    return MIGProfileType::mig_2g_10gb;
  } else if (hashCode == mig_2g_20gb_HASH) {
    return MIGProfileType::mig_2g_20gb;
  } else if (hashCode == mig_2g_35gb_HASH) {
    return MIGProfileType::mig_2g_35gb;
  } else if (hashCode == mig_2g_45gb_HASH) {
    return MIGProfileType::mig_2g_45gb;
  } else if (hashCode == mig_2g_47gb_HASH) {
    return MIGProfileType::mig_2g_47gb;
  } else if (hashCode == mig_3g_20gb_HASH) {
    return MIGProfileType::mig_3g_20gb;
  } else if (hashCode == mig_3g_40gb_HASH) {
    return MIGProfileType::mig_3g_40gb;
  } else if (hashCode == mig_3g_71gb_HASH) {
    return MIGProfileType::mig_3g_71gb;
  } else if (hashCode == mig_3g_90gb_HASH) {
    return MIGProfileType::mig_3g_90gb;
  } else if (hashCode == mig_3g_93gb_HASH) {
    return MIGProfileType::mig_3g_93gb;
  } else if (hashCode == mig_4g_20gb_HASH) {
    return MIGProfileType::mig_4g_20gb;
  } else if (hashCode == mig_4g_40gb_HASH) {
    return MIGProfileType::mig_4g_40gb;
  } else if (hashCode == mig_4g_71gb_HASH) {
    return MIGProfileType::mig_4g_71gb;
  } else if (hashCode == mig_4g_90gb_HASH) {
    return MIGProfileType::mig_4g_90gb;
  } else if (hashCode == mig_4g_93gb_HASH) {
    return MIGProfileType::mig_4g_93gb;
  } else if (hashCode == mig_7g_40gb_HASH) {
    return MIGProfileType::mig_7g_40gb;
  } else if (hashCode == mig_7g_80gb_HASH) {
    return MIGProfileType::mig_7g_80gb;
  } else if (hashCode == mig_7g_141gb_HASH) {
    return MIGProfileType::mig_7g_141gb;
  } else if (hashCode == mig_7g_180gb_HASH) {
    return MIGProfileType::mig_7g_180gb;
  } else if (hashCode == mig_7g_186gb_HASH) {
    return MIGProfileType::mig_7g_186gb;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<MIGProfileType>(hashCode);
  }

  return MIGProfileType::NOT_SET;
}

Aws::String GetNameForMIGProfileType(MIGProfileType enumValue) {
  switch (enumValue) {
    case MIGProfileType::NOT_SET:
      return {};
    case MIGProfileType::mig_1g_5gb:
      return "mig-1g.5gb";
    case MIGProfileType::mig_1g_10gb:
      return "mig-1g.10gb";
    case MIGProfileType::mig_1g_18gb:
      return "mig-1g.18gb";
    case MIGProfileType::mig_1g_20gb:
      return "mig-1g.20gb";
    case MIGProfileType::mig_1g_23gb:
      return "mig-1g.23gb";
    case MIGProfileType::mig_1g_35gb:
      return "mig-1g.35gb";
    case MIGProfileType::mig_1g_45gb:
      return "mig-1g.45gb";
    case MIGProfileType::mig_1g_47gb:
      return "mig-1g.47gb";
    case MIGProfileType::mig_2g_10gb:
      return "mig-2g.10gb";
    case MIGProfileType::mig_2g_20gb:
      return "mig-2g.20gb";
    case MIGProfileType::mig_2g_35gb:
      return "mig-2g.35gb";
    case MIGProfileType::mig_2g_45gb:
      return "mig-2g.45gb";
    case MIGProfileType::mig_2g_47gb:
      return "mig-2g.47gb";
    case MIGProfileType::mig_3g_20gb:
      return "mig-3g.20gb";
    case MIGProfileType::mig_3g_40gb:
      return "mig-3g.40gb";
    case MIGProfileType::mig_3g_71gb:
      return "mig-3g.71gb";
    case MIGProfileType::mig_3g_90gb:
      return "mig-3g.90gb";
    case MIGProfileType::mig_3g_93gb:
      return "mig-3g.93gb";
    case MIGProfileType::mig_4g_20gb:
      return "mig-4g.20gb";
    case MIGProfileType::mig_4g_40gb:
      return "mig-4g.40gb";
    case MIGProfileType::mig_4g_71gb:
      return "mig-4g.71gb";
    case MIGProfileType::mig_4g_90gb:
      return "mig-4g.90gb";
    case MIGProfileType::mig_4g_93gb:
      return "mig-4g.93gb";
    case MIGProfileType::mig_7g_40gb:
      return "mig-7g.40gb";
    case MIGProfileType::mig_7g_80gb:
      return "mig-7g.80gb";
    case MIGProfileType::mig_7g_141gb:
      return "mig-7g.141gb";
    case MIGProfileType::mig_7g_180gb:
      return "mig-7g.180gb";
    case MIGProfileType::mig_7g_186gb:
      return "mig-7g.186gb";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace MIGProfileTypeMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
